#include <stray.h>
#include <Rcpp/Benchmark/Timer.h>

// [[Rcpp::depends(RcppNumerical)]]
// [[Rcpp::depends(RcppEigen)]]

using namespace Rcpp;
using Eigen::Map;
using Eigen::MatrixXd;
using Eigen::ArrayXXd;
using Eigen::VectorXd;

// [[Rcpp::export]]
List optimLabraduckCollapsed(const Eigen::ArrayXXd Y, 
               const double upsilon, 
               const Eigen::MatrixXd Xi,
               const double gamma,
               const Eigen::MatrixXd F,
               const Eigen::MatrixXd G,
               const Eigen::MatrixXd W,
               const Eigen::MatrixXd M0,
               const Eigen::MatrixXd C0,
               const Eigen::VectorXd observations, 
               Eigen::MatrixXd init, 
               Eigen::VectorXd W_scale_init,
               int n_samples=2000, 
               bool calcGradHess = true,
               double b1 = 0.9,         
               double b2 = 0.99,        
               double step_size = 0.003, // was called eta in ADAM code
               double epsilon = 10e-7, 
               double eps_f=1e-10,       
               double eps_g=1e-4,       
               int max_iter=10000,      
               bool verbose=false,      
               int verbose_rate=10,
               String decomp_method="cholesky",
               String optim_method="adam",
               double eigvalthresh=0, 
               double jitter=0,
               double multDirichletBoot = -1.0, 
               bool useSylv = true, 
               int ncores=-1){  
  #ifdef STRAY_USE_PARALLEL 
    Eigen::initParallel();
    if (ncores > 0) Eigen::setNbThreads(ncores);
  #endif 
  Timer timer;
  timer.step("Overall_start");
  int N = Y.cols();
  int D = Y.rows();

  Rcout << "W_scale_init:" << W_scale_init << std::endl;

  // calculate B, AInv
  MatrixXd B = dlm_B(F, G, M0, observations);
  MatrixXd KInv = Xi.inverse();
  MatrixXd U = dlm_U(gamma, F, G, W, C0, observations, false);
  MatrixXd UInv = U.inverse();

  LabraduckCollapsed cm(Y, upsilon, B, KInv, U, UInv, useSylv);

  Map<VectorXd> eta(init.data(), init.size()); // will rewrite by optim
  VectorXd pars(init.size() + W_scale_init.size());
  pars.head(init.size()) = eta;
  pars.tail(W_scale_init.size()) = W_scale_init;

  Rcout << "pars.tail(): " << pars.tail(1) << std::endl;
  Rcout << "pars.size(): " << pars.size() << std::endl;
  Rcout << "init.size(): " << init.size() << std::endl;

  double nllopt; // NEGATIVE LogLik at optim
  List out(10);
  out.names() = CharacterVector::create("LogLik", "Gradient", "Hessian",
            "Pars", "Samples", "W_scale", "Timer", "logInvNegHessDet", "B", "UInv");
  
  // Pick optimizer (ADAM - without perturbation appears to be best)
  //   ADAM with perturbations not fully implemented
  timer.step("Optimization_start");
  int status;
  if (optim_method=="lbfgs"){
    status = Numer::optim_lbfgs(cm, pars, nllopt, max_iter, eps_f, eps_g);
  } else if (optim_method=="adam"){
    status = adam::optim_adam(cm, pars, nllopt, b1, b2, step_size, epsilon, 
                                  eps_f, eps_g, max_iter, verbose, verbose_rate);  
  } else {
    Rcpp::stop("unrecognized optimization method");
  }

  timer.step("Optimization_stop");
  if (status<0)
    Rcpp::warning("Max Iterations Hit, May not be at optima");
  eta = pars.head(init.size());
  Map<MatrixXd> etamat(eta.data(), D-1, N);
  Map<VectorXd> W_scale(pars.tail(W_scale_init.size()).data(), W_scale_init.size());
  out[0] = -nllopt; // Return (positive) LogLik
  out[3] = etamat;
  out[5] = W_scale.array().exp().matrix();

  
  if (n_samples > 0 || calcGradHess){
    if (verbose) Rcout << "Allocating for Gradient" << std::endl;
    VectorXd grad(N*(D-1));
    MatrixXd hess; // don't preallocate this thing could be unneeded
    if (verbose) Rcout << "Calculating Gradient" << std::endl;
    grad = cm.calcGrad(W_scale); // should have eta at optima already
    
    // "Multinomial-Dirichlet" option
    if (multDirichletBoot>=0.0){
      timer.step("MultDirichletBoot_start");
      if (verbose) Rcout << "Preforming Multinomial Dirichlet Bootstrap" << std::endl;
      MatrixXd samp = MultDirichletBoot::MultDirichletBoot(n_samples, etamat, Y, 
                                                           multDirichletBoot);
      timer.step("MultDirichletBoot_stop");
      out[1] = R_NilValue;
      out[2] = R_NilValue;
      IntegerVector d = IntegerVector::create(D-1, N, n_samples);
      NumericVector samples = wrap(samp);
      samples.attr("dim") = d; // convert to 3d array for return to R
      out[4] = samples;
      NumericVector t(timer);
      out[6] = t;
      timer.step("Overall_stop");
      return out;
    }
    // "Multinomial-Dirchlet" option 
    if (verbose) Rcout << "Calculating Hessian" << std::endl;
    timer.step("HessianCalculation_start");
    hess = -cm.calcHess(); // should have eta at optima already
    timer.step("HessianCalculation_Stop");
    out[1] = grad;
    if ((N * (D-1)) > 44750){
      Rcpp::warning("Hessian is to large to return to R");
    } else {
      if (calcGradHess)
        out[2] = hess;    
    }

    if (n_samples>0){
      // Laplace Approximation
      int status;
      timer.step("LaplaceApproximation_start");
      MatrixXd samp = MatrixXd::Zero(N*(D-1), n_samples);
      double logInvNegHessDet;
      status = lapap::LaplaceApproximation(samp, eta, hess, 
                                           decomp_method, eigvalthresh, 
                                           jitter, 
                                           logInvNegHessDet);
      timer.step("LaplaceApproximation_stop");
      if (status != 0){
        Rcpp::warning("Decomposition of Hessian Failed, returning MAP Estimate only");
        return out;
      }
      out[7] = logInvNegHessDet;
      
      IntegerVector d = IntegerVector::create(D-1, N, n_samples);
      NumericVector samples = wrap(samp);
      samples.attr("dim") = d; // convert to 3d array for return to R
      out[4] = samples;
    } // endif n_samples || calcGradHess
  } // endif n_samples || calcGradHess
  timer.step("Overall_stop");
  NumericVector t(timer);
  out[6] = t;
  out[8] = B;
  out[9] = UInv;
  return out;
}