// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/stray.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// conjugateLinearModel
List conjugateLinearModel(const Eigen::Map<Eigen::MatrixXd> Y, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Theta, const Eigen::Map<Eigen::MatrixXd> Gamma, const Eigen::Map<Eigen::MatrixXd> Xi, const double upsilon, int n_samples);
RcppExport SEXP _stray_conjugateLinearModel(SEXP YSEXP, SEXP XSEXP, SEXP ThetaSEXP, SEXP GammaSEXP, SEXP XiSEXP, SEXP upsilonSEXP, SEXP n_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(conjugateLinearModel(Y, X, Theta, Gamma, Xi, upsilon, n_samples));
    return rcpp_result_gen;
END_RCPP
}
// optimLabraduckCollapsed
List optimLabraduckCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd Xi, const Eigen::MatrixXd F, const Eigen::MatrixXd G, const Eigen::MatrixXd W, const Eigen::MatrixXd M0, const Eigen::MatrixXd C0, const Eigen::VectorXd observations, Eigen::MatrixXd init, double gamma_scale, double W_scale, int n_samples, bool calcGradHess, double b1, double b2, double step_size, double epsilon, double eps_f, double eps_g, int max_iter, bool verbose, int verbose_rate, String decomp_method, String optim_method, double eigvalthresh, double jitter, double multDirichletBoot, bool useSylv, int ncores);
RcppExport SEXP _stray_optimLabraduckCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP XiSEXP, SEXP FSEXP, SEXP GSEXP, SEXP WSEXP, SEXP M0SEXP, SEXP C0SEXP, SEXP observationsSEXP, SEXP initSEXP, SEXP gamma_scaleSEXP, SEXP W_scaleSEXP, SEXP n_samplesSEXP, SEXP calcGradHessSEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP step_sizeSEXP, SEXP epsilonSEXP, SEXP eps_fSEXP, SEXP eps_gSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP verbose_rateSEXP, SEXP decomp_methodSEXP, SEXP optim_methodSEXP, SEXP eigvalthreshSEXP, SEXP jitterSEXP, SEXP multDirichletBootSEXP, SEXP useSylvSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type M0(M0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type C0(C0SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type gamma_scale(gamma_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type W_scale(W_scaleSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type calcGradHess(calcGradHessSEXP);
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type eps_f(eps_fSEXP);
    Rcpp::traits::input_parameter< double >::type eps_g(eps_gSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose_rate(verbose_rateSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< String >::type optim_method(optim_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< double >::type multDirichletBoot(multDirichletBootSEXP);
    Rcpp::traits::input_parameter< bool >::type useSylv(useSylvSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(optimLabraduckCollapsed(Y, upsilon, Xi, F, G, W, M0, C0, observations, init, gamma_scale, W_scale, n_samples, calcGradHess, b1, b2, step_size, epsilon, eps_f, eps_g, max_iter, verbose, verbose_rate, decomp_method, optim_method, eigvalthresh, jitter, multDirichletBoot, useSylv, ncores));
    return rcpp_result_gen;
END_RCPP
}
// uncollapseLabraduck
List uncollapseLabraduck(const Eigen::Map<Eigen::MatrixXd> eta, const Eigen::Map<Eigen::MatrixXd> F, const Eigen::Map<Eigen::MatrixXd> G, const Eigen::Map<Eigen::MatrixXd> W, const double gamma_scale, const double W_scale, const int upsilon, const Eigen::Map<Eigen::MatrixXd> Xi, const Eigen::Map<Eigen::MatrixXd> M0, const Eigen::Map<Eigen::MatrixXd> C0, const Eigen::Map<Eigen::VectorXd> observations, long seed, bool ret_mean, bool apply_smoother, int ncores);
RcppExport SEXP _stray_uncollapseLabraduck(SEXP etaSEXP, SEXP FSEXP, SEXP GSEXP, SEXP WSEXP, SEXP gamma_scaleSEXP, SEXP W_scaleSEXP, SEXP upsilonSEXP, SEXP XiSEXP, SEXP M0SEXP, SEXP C0SEXP, SEXP observationsSEXP, SEXP seedSEXP, SEXP ret_meanSEXP, SEXP apply_smootherSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type F(FSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type G(GSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type W(WSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma_scale(gamma_scaleSEXP);
    Rcpp::traits::input_parameter< const double >::type W_scale(W_scaleSEXP);
    Rcpp::traits::input_parameter< const int >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type M0(M0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type C0(C0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type observations(observationsSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_mean(ret_meanSEXP);
    Rcpp::traits::input_parameter< bool >::type apply_smoother(apply_smootherSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(uncollapseLabraduck(eta, F, G, W, gamma_scale, W_scale, upsilon, Xi, M0, C0, observations, seed, ret_mean, apply_smoother, ncores));
    return rcpp_result_gen;
END_RCPP
}
// optimMaltipooCollapsed
List optimMaltipooCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd Theta, const Eigen::MatrixXd X, const Eigen::MatrixXd KInv, const Eigen::MatrixXd U, Eigen::MatrixXd init, Eigen::VectorXd ellinit, int n_samples, bool calcGradHess, double b1, double b2, double step_size, double epsilon, double eps_f, double eps_g, int max_iter, bool verbose, int verbose_rate, String decomp_method, double eigvalthresh, double jitter);
RcppExport SEXP _stray_optimMaltipooCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaSEXP, SEXP XSEXP, SEXP KInvSEXP, SEXP USEXP, SEXP initSEXP, SEXP ellinitSEXP, SEXP n_samplesSEXP, SEXP calcGradHessSEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP step_sizeSEXP, SEXP epsilonSEXP, SEXP eps_fSEXP, SEXP eps_gSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP verbose_rateSEXP, SEXP decomp_methodSEXP, SEXP eigvalthreshSEXP, SEXP jitterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type KInv(KInvSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type U(USEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type init(initSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type ellinit(ellinitSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type calcGradHess(calcGradHessSEXP);
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type eps_f(eps_fSEXP);
    Rcpp::traits::input_parameter< double >::type eps_g(eps_gSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose_rate(verbose_rateSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    rcpp_result_gen = Rcpp::wrap(optimMaltipooCollapsed(Y, upsilon, Theta, X, KInv, U, init, ellinit, n_samples, calcGradHess, b1, b2, step_size, epsilon, eps_f, eps_g, max_iter, verbose, verbose_rate, decomp_method, eigvalthresh, jitter));
    return rcpp_result_gen;
END_RCPP
}
// loglikPibbleCollapsed
double loglikPibbleCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _stray_loglikPibbleCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikPibbleCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// gradPibbleCollapsed
Eigen::VectorXd gradPibbleCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _stray_gradPibbleCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(gradPibbleCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// hessPibbleCollapsed
Eigen::MatrixXd hessPibbleCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _stray_hessPibbleCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(hessPibbleCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// hessVectorProd
Eigen::VectorXd hessVectorProd(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, Eigen::VectorXd v, double r, bool sylv);
RcppExport SEXP _stray_hessVectorProd(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP vSEXP, SEXP rSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(hessVectorProd(Y, upsilon, ThetaX, K, A, eta, v, r, sylv));
    return rcpp_result_gen;
END_RCPP
}
// optimPibbleCollapsed
List optimPibbleCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd KInv, const Eigen::MatrixXd AInv, Eigen::MatrixXd init, int n_samples, bool calcGradHess, double b1, double b2, double step_size, double epsilon, double eps_f, double eps_g, int max_iter, bool verbose, int verbose_rate, String decomp_method, String optim_method, double eigvalthresh, double jitter, double multDirichletBoot, bool useSylv, int ncores);
RcppExport SEXP _stray_optimPibbleCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KInvSEXP, SEXP AInvSEXP, SEXP initSEXP, SEXP n_samplesSEXP, SEXP calcGradHessSEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP step_sizeSEXP, SEXP epsilonSEXP, SEXP eps_fSEXP, SEXP eps_gSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP verbose_rateSEXP, SEXP decomp_methodSEXP, SEXP optim_methodSEXP, SEXP eigvalthreshSEXP, SEXP jitterSEXP, SEXP multDirichletBootSEXP, SEXP useSylvSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type KInv(KInvSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type AInv(AInvSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type calcGradHess(calcGradHessSEXP);
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type eps_f(eps_fSEXP);
    Rcpp::traits::input_parameter< double >::type eps_g(eps_gSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose_rate(verbose_rateSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< String >::type optim_method(optim_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< double >::type multDirichletBoot(multDirichletBootSEXP);
    Rcpp::traits::input_parameter< bool >::type useSylv(useSylvSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(optimPibbleCollapsed(Y, upsilon, ThetaX, KInv, AInv, init, n_samples, calcGradHess, b1, b2, step_size, epsilon, eps_f, eps_g, max_iter, verbose, verbose_rate, decomp_method, optim_method, eigvalthresh, jitter, multDirichletBoot, useSylv, ncores));
    return rcpp_result_gen;
END_RCPP
}
// uncollapsePibble
List uncollapsePibble(const Eigen::Map<Eigen::VectorXd> eta, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Theta, const Eigen::Map<Eigen::MatrixXd> Gamma, const Eigen::Map<Eigen::MatrixXd> Xi, const double upsilon, long seed, bool ret_mean, int ncores);
RcppExport SEXP _stray_uncollapsePibble(SEXP etaSEXP, SEXP XSEXP, SEXP ThetaSEXP, SEXP GammaSEXP, SEXP XiSEXP, SEXP upsilonSEXP, SEXP seedSEXP, SEXP ret_meanSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_mean(ret_meanSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(uncollapsePibble(eta, X, Theta, Gamma, Xi, upsilon, seed, ret_mean, ncores));
    return rcpp_result_gen;
END_RCPP
}
// rMatNormalCholesky_test
Eigen::MatrixXd rMatNormalCholesky_test(Eigen::MatrixXd M, Eigen::MatrixXd LU, Eigen::MatrixXd LV, int discard);
RcppExport SEXP _stray_rMatNormalCholesky_test(SEXP MSEXP, SEXP LUSEXP, SEXP LVSEXP, SEXP discardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type M(MSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type LU(LUSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type LV(LVSEXP);
    Rcpp::traits::input_parameter< int >::type discard(discardSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatNormalCholesky_test(M, LU, LV, discard));
    return rcpp_result_gen;
END_RCPP
}
// rInvWishRevCholesky_test
Eigen::MatrixXd rInvWishRevCholesky_test(int v, Eigen::MatrixXd Psi);
RcppExport SEXP _stray_rInvWishRevCholesky_test(SEXP vSEXP, SEXP PsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Psi(PsiSEXP);
    rcpp_result_gen = Rcpp::wrap(rInvWishRevCholesky_test(v, Psi));
    return rcpp_result_gen;
END_RCPP
}
// rInvWishRevCholesky_thread_test
Eigen::MatrixXd rInvWishRevCholesky_thread_test(int v, Eigen::MatrixXd Psi, int discard);
RcppExport SEXP _stray_rInvWishRevCholesky_thread_test(SEXP vSEXP, SEXP PsiSEXP, SEXP discardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< int >::type discard(discardSEXP);
    rcpp_result_gen = Rcpp::wrap(rInvWishRevCholesky_thread_test(v, Psi, discard));
    return rcpp_result_gen;
END_RCPP
}
// rInvWishRevCholesky_thread_inplace_test
Eigen::MatrixXd rInvWishRevCholesky_thread_inplace_test(int v, Eigen::MatrixXd Psi, int discard);
RcppExport SEXP _stray_rInvWishRevCholesky_thread_inplace_test(SEXP vSEXP, SEXP PsiSEXP, SEXP discardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< int >::type discard(discardSEXP);
    rcpp_result_gen = Rcpp::wrap(rInvWishRevCholesky_thread_inplace_test(v, Psi, discard));
    return rcpp_result_gen;
END_RCPP
}
// rMatUnitNormal_test1
Eigen::MatrixXd rMatUnitNormal_test1(int n, int m);
RcppExport SEXP _stray_rMatUnitNormal_test1(SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatUnitNormal_test1(n, m));
    return rcpp_result_gen;
END_RCPP
}
// rMatUnitNormal_test2
Eigen::MatrixXd rMatUnitNormal_test2(int n);
RcppExport SEXP _stray_rMatUnitNormal_test2(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatUnitNormal_test2(n));
    return rcpp_result_gen;
END_RCPP
}
// lmvgamma
double lmvgamma(double a, int p);
RcppExport SEXP _stray_lmvgamma(SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(lmvgamma(a, p));
    return rcpp_result_gen;
END_RCPP
}
// lmvgamma_deriv
double lmvgamma_deriv(double a, int p);
RcppExport SEXP _stray_lmvgamma_deriv(SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(lmvgamma_deriv(a, p));
    return rcpp_result_gen;
END_RCPP
}
// power_G
Eigen::MatrixXd power_G(Eigen::MatrixXd G, int it_begin, int it_end);
RcppExport SEXP _stray_power_G(SEXP GSEXP, SEXP it_beginSEXP, SEXP it_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type it_begin(it_beginSEXP);
    Rcpp::traits::input_parameter< int >::type it_end(it_endSEXP);
    rcpp_result_gen = Rcpp::wrap(power_G(G, it_begin, it_end));
    return rcpp_result_gen;
END_RCPP
}
// dlm_B
Eigen::MatrixXd dlm_B(Eigen::MatrixXd F, Eigen::MatrixXd G, Eigen::MatrixXd M0, Eigen::VectorXd observations);
RcppExport SEXP _stray_dlm_B(SEXP FSEXP, SEXP GSEXP, SEXP M0SEXP, SEXP observationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type F(FSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type M0(M0SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type observations(observationsSEXP);
    rcpp_result_gen = Rcpp::wrap(dlm_B(F, G, M0, observations));
    return rcpp_result_gen;
END_RCPP
}
// dlm_U
Eigen::MatrixXd dlm_U(Eigen::VectorXd F, Eigen::MatrixXd G, Eigen::MatrixXd W, Eigen::MatrixXd C0, Eigen::VectorXd observations);
RcppExport SEXP _stray_dlm_U(SEXP FSEXP, SEXP GSEXP, SEXP WSEXP, SEXP C0SEXP, SEXP observationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type F(FSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C0(C0SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type observations(observationsSEXP);
    rcpp_result_gen = Rcpp::wrap(dlm_U(F, G, W, C0, observations));
    return rcpp_result_gen;
END_RCPP
}
// mat_dist
double mat_dist(Eigen::MatrixXd A, Eigen::MatrixXd B, bool use_Riemann);
RcppExport SEXP _stray_mat_dist(SEXP ASEXP, SEXP BSEXP, SEXP use_RiemannSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< bool >::type use_Riemann(use_RiemannSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_dist(A, B, use_Riemann));
    return rcpp_result_gen;
END_RCPP
}
// eigen_lap_test
Eigen::MatrixXd eigen_lap_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, double eigvalthresh);
RcppExport SEXP _stray_eigen_lap_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_lap_test(n_samples, m, S, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// cholesky_lap_test
Eigen::MatrixXd cholesky_lap_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, double eigvalthresh);
RcppExport SEXP _stray_cholesky_lap_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(cholesky_lap_test(n_samples, m, S, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// LaplaceApproximation_test
Eigen::MatrixXd LaplaceApproximation_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, String decomp_method, double eigvalthresh);
RcppExport SEXP _stray_LaplaceApproximation_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP decomp_methodSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(LaplaceApproximation_test(n_samples, m, S, decomp_method, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// alrInv_default_test
Eigen::MatrixXd alrInv_default_test(Eigen::MatrixXd eta);
RcppExport SEXP _stray_alrInv_default_test(SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(alrInv_default_test(eta));
    return rcpp_result_gen;
END_RCPP
}
// alr_default_test
Eigen::MatrixXd alr_default_test(Eigen::MatrixXd pi);
RcppExport SEXP _stray_alr_default_test(SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(alr_default_test(pi));
    return rcpp_result_gen;
END_RCPP
}
// rDirichlet_test
Eigen::MatrixXd rDirichlet_test(int n_samples, Eigen::VectorXd alpha);
RcppExport SEXP _stray_rDirichlet_test(SEXP n_samplesSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rDirichlet_test(n_samples, alpha));
    return rcpp_result_gen;
END_RCPP
}
// MultDirichletBoot_test
Eigen::MatrixXd MultDirichletBoot_test(int n_samples, Eigen::MatrixXd eta, Eigen::ArrayXXd Y, double pseudocount);
RcppExport SEXP _stray_MultDirichletBoot_test(SEXP n_samplesSEXP, SEXP etaSEXP, SEXP YSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(MultDirichletBoot_test(n_samples, eta, Y, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// fillUnitNormal_test
void fillUnitNormal_test(Eigen::Map<Eigen::MatrixXd>& Z);
RcppExport SEXP _stray_fillUnitNormal_test(SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type Z(ZSEXP);
    fillUnitNormal_test(Z);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stray_conjugateLinearModel", (DL_FUNC) &_stray_conjugateLinearModel, 7},
    {"_stray_optimLabraduckCollapsed", (DL_FUNC) &_stray_optimLabraduckCollapsed, 30},
    {"_stray_uncollapseLabraduck", (DL_FUNC) &_stray_uncollapseLabraduck, 15},
    {"_stray_optimMaltipooCollapsed", (DL_FUNC) &_stray_optimMaltipooCollapsed, 22},
    {"_stray_loglikPibbleCollapsed", (DL_FUNC) &_stray_loglikPibbleCollapsed, 7},
    {"_stray_gradPibbleCollapsed", (DL_FUNC) &_stray_gradPibbleCollapsed, 7},
    {"_stray_hessPibbleCollapsed", (DL_FUNC) &_stray_hessPibbleCollapsed, 7},
    {"_stray_hessVectorProd", (DL_FUNC) &_stray_hessVectorProd, 9},
    {"_stray_optimPibbleCollapsed", (DL_FUNC) &_stray_optimPibbleCollapsed, 24},
    {"_stray_uncollapsePibble", (DL_FUNC) &_stray_uncollapsePibble, 9},
    {"_stray_rMatNormalCholesky_test", (DL_FUNC) &_stray_rMatNormalCholesky_test, 4},
    {"_stray_rInvWishRevCholesky_test", (DL_FUNC) &_stray_rInvWishRevCholesky_test, 2},
    {"_stray_rInvWishRevCholesky_thread_test", (DL_FUNC) &_stray_rInvWishRevCholesky_thread_test, 3},
    {"_stray_rInvWishRevCholesky_thread_inplace_test", (DL_FUNC) &_stray_rInvWishRevCholesky_thread_inplace_test, 3},
    {"_stray_rMatUnitNormal_test1", (DL_FUNC) &_stray_rMatUnitNormal_test1, 2},
    {"_stray_rMatUnitNormal_test2", (DL_FUNC) &_stray_rMatUnitNormal_test2, 1},
    {"_stray_lmvgamma", (DL_FUNC) &_stray_lmvgamma, 2},
    {"_stray_lmvgamma_deriv", (DL_FUNC) &_stray_lmvgamma_deriv, 2},
    {"_stray_power_G", (DL_FUNC) &_stray_power_G, 3},
    {"_stray_dlm_B", (DL_FUNC) &_stray_dlm_B, 4},
    {"_stray_dlm_U", (DL_FUNC) &_stray_dlm_U, 5},
    {"_stray_mat_dist", (DL_FUNC) &_stray_mat_dist, 3},
    {"_stray_eigen_lap_test", (DL_FUNC) &_stray_eigen_lap_test, 4},
    {"_stray_cholesky_lap_test", (DL_FUNC) &_stray_cholesky_lap_test, 4},
    {"_stray_LaplaceApproximation_test", (DL_FUNC) &_stray_LaplaceApproximation_test, 5},
    {"_stray_alrInv_default_test", (DL_FUNC) &_stray_alrInv_default_test, 1},
    {"_stray_alr_default_test", (DL_FUNC) &_stray_alr_default_test, 1},
    {"_stray_rDirichlet_test", (DL_FUNC) &_stray_rDirichlet_test, 2},
    {"_stray_MultDirichletBoot_test", (DL_FUNC) &_stray_MultDirichletBoot_test, 4},
    {"_stray_fillUnitNormal_test", (DL_FUNC) &_stray_fillUnitNormal_test, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_stray(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
