// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_Sigma_star_inv
arma::Mat<double> calc_Sigma_star_inv(double ni, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi);
RcppExport SEXP _OUFgrad_calc_Sigma_star_inv(SEXP niSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Sigma_star_inv(ni, Lambda, Sigma_u, Theta, Psi));
    return rcpp_result_gen;
END_RCPP
}
// calc_Sigma_star
arma::Mat<double> calc_Sigma_star(double ni, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi);
RcppExport SEXP _OUFgrad_calc_Sigma_star(SEXP niSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Sigma_star(ni, Lambda, Sigma_u, Theta, Psi));
    return rcpp_result_gen;
END_RCPP
}
// grad_lambda_cpp_slow
arma::Mat<double> grad_lambda_cpp_slow(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Psi, arma::mat Sigma_star_inv, arma::mat nonzero);
RcppExport SEXP _OUFgrad_grad_lambda_cpp_slow(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP PsiSEXP, SEXP Sigma_star_invSEXP, SEXP nonzeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_star_inv(Sigma_star_invSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_lambda_cpp_slow(k, ni, Yi, Lambda, Psi, Sigma_star_inv, nonzero));
    return rcpp_result_gen;
END_RCPP
}
// grad_sigma_u_cpp_slow
arma::Mat<double> grad_sigma_u_cpp_slow(double k, double ni, arma::vec Yi, arma::mat Sigma_u, arma::mat Sigma_star_inv);
RcppExport SEXP _OUFgrad_grad_sigma_u_cpp_slow(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP Sigma_uSEXP, SEXP Sigma_star_invSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_star_inv(Sigma_star_invSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_sigma_u_cpp_slow(k, ni, Yi, Sigma_u, Sigma_star_inv));
    return rcpp_result_gen;
END_RCPP
}
// grad_sigma_e_cpp_slow
arma::Mat<double> grad_sigma_e_cpp_slow(double k, double ni, arma::vec Yi, arma::mat Theta, arma::mat Sigma_star_inv);
RcppExport SEXP _OUFgrad_grad_sigma_e_cpp_slow(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP ThetaSEXP, SEXP Sigma_star_invSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_star_inv(Sigma_star_invSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_sigma_e_cpp_slow(k, ni, Yi, Theta, Sigma_star_inv));
    return rcpp_result_gen;
END_RCPP
}
// grad_lambda_cpp
arma::Mat<double> grad_lambda_cpp(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Lambda_Psi, arma::mat nonzero, arma::mat Sigma_term);
RcppExport SEXP _OUFgrad_grad_lambda_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Lambda_PsiSEXP, SEXP nonzeroSEXP, SEXP Sigma_termSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda_Psi(Lambda_PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_term(Sigma_termSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_lambda_cpp(k, ni, Yi, Lambda, Lambda_Psi, nonzero, Sigma_term));
    return rcpp_result_gen;
END_RCPP
}
// grad_sigma_u_cpp
arma::Mat<double> grad_sigma_u_cpp(double k, double ni, arma::vec Yi, arma::mat Sigma_u, arma::mat Sigma_term);
RcppExport SEXP _OUFgrad_grad_sigma_u_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP Sigma_uSEXP, SEXP Sigma_termSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_term(Sigma_termSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_sigma_u_cpp(k, ni, Yi, Sigma_u, Sigma_term));
    return rcpp_result_gen;
END_RCPP
}
// grad_sigma_e_cpp
arma::Mat<double> grad_sigma_e_cpp(double k, double ni, arma::vec Yi, arma::mat Theta, arma::mat Sigma_term);
RcppExport SEXP _OUFgrad_grad_sigma_e_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP ThetaSEXP, SEXP Sigma_termSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_term(Sigma_termSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_sigma_e_cpp(k, ni, Yi, Theta, Sigma_term));
    return rcpp_result_gen;
END_RCPP
}
// fa_grads_slow
arma::Mat<double> fa_grads_slow(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat Sigma_star_inv, arma::mat nonzero);
RcppExport SEXP _OUFgrad_fa_grads_slow(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP Sigma_star_invSEXP, SEXP nonzeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_star_inv(Sigma_star_invSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    rcpp_result_gen = Rcpp::wrap(fa_grads_slow(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, Sigma_star_inv, nonzero));
    return rcpp_result_gen;
END_RCPP
}
// fa_grads
arma::Mat<double> fa_grads(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat Sigma_star_inv, arma::mat nonzero, arma::mat I_SYYt, arma::mat Sigma_term);
RcppExport SEXP _OUFgrad_fa_grads(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP Sigma_star_invSEXP, SEXP nonzeroSEXP, SEXP I_SYYtSEXP, SEXP Sigma_termSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_star_inv(Sigma_star_invSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I_SYYt(I_SYYtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_term(Sigma_termSEXP);
    rcpp_result_gen = Rcpp::wrap(fa_grads(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, Sigma_star_inv, nonzero, I_SYYt, Sigma_term));
    return rcpp_result_gen;
END_RCPP
}
// fa_grads_precomp
arma::Mat<double> fa_grads_precomp(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat nonzero);
RcppExport SEXP _OUFgrad_fa_grads_precomp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP nonzeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    rcpp_result_gen = Rcpp::wrap(fa_grads_precomp(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, nonzero));
    return rcpp_result_gen;
END_RCPP
}
// sb_grad_lambda_cpp
arma::Mat<double> sb_grad_lambda_cpp(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat nonzero, arma::mat grad_id);
RcppExport SEXP _OUFgrad_sb_grad_lambda_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP nonzeroSEXP, SEXP grad_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type grad_id(grad_idSEXP);
    rcpp_result_gen = Rcpp::wrap(sb_grad_lambda_cpp(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, nonzero, grad_id));
    return rcpp_result_gen;
END_RCPP
}
// sb_grad_sigma_u_cpp
arma::Mat<double> sb_grad_sigma_u_cpp(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat nonzero, arma::mat grad_id);
RcppExport SEXP _OUFgrad_sb_grad_sigma_u_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP nonzeroSEXP, SEXP grad_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type grad_id(grad_idSEXP);
    rcpp_result_gen = Rcpp::wrap(sb_grad_sigma_u_cpp(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, nonzero, grad_id));
    return rcpp_result_gen;
END_RCPP
}
// sb_grad_sigma_e_cpp
arma::Mat<double> sb_grad_sigma_e_cpp(double k, double ni, arma::vec Yi, arma::mat Lambda, arma::mat Sigma_u, arma::mat Theta, arma::mat Psi, arma::mat nonzero, arma::mat grad_id);
RcppExport SEXP _OUFgrad_sb_grad_sigma_e_cpp(SEXP kSEXP, SEXP niSEXP, SEXP YiSEXP, SEXP LambdaSEXP, SEXP Sigma_uSEXP, SEXP ThetaSEXP, SEXP PsiSEXP, SEXP nonzeroSEXP, SEXP grad_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type ni(niSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yi(YiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_u(Sigma_uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nonzero(nonzeroSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type grad_id(grad_idSEXP);
    rcpp_result_gen = Rcpp::wrap(sb_grad_sigma_e_cpp(k, ni, Yi, Lambda, Sigma_u, Theta, Psi, nonzero, grad_id));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_OUFgrad_calc_Sigma_star_inv", (DL_FUNC) &_OUFgrad_calc_Sigma_star_inv, 5},
    {"_OUFgrad_calc_Sigma_star", (DL_FUNC) &_OUFgrad_calc_Sigma_star, 5},
    {"_OUFgrad_grad_lambda_cpp_slow", (DL_FUNC) &_OUFgrad_grad_lambda_cpp_slow, 7},
    {"_OUFgrad_grad_sigma_u_cpp_slow", (DL_FUNC) &_OUFgrad_grad_sigma_u_cpp_slow, 5},
    {"_OUFgrad_grad_sigma_e_cpp_slow", (DL_FUNC) &_OUFgrad_grad_sigma_e_cpp_slow, 5},
    {"_OUFgrad_grad_lambda_cpp", (DL_FUNC) &_OUFgrad_grad_lambda_cpp, 7},
    {"_OUFgrad_grad_sigma_u_cpp", (DL_FUNC) &_OUFgrad_grad_sigma_u_cpp, 5},
    {"_OUFgrad_grad_sigma_e_cpp", (DL_FUNC) &_OUFgrad_grad_sigma_e_cpp, 5},
    {"_OUFgrad_fa_grads_slow", (DL_FUNC) &_OUFgrad_fa_grads_slow, 9},
    {"_OUFgrad_fa_grads", (DL_FUNC) &_OUFgrad_fa_grads, 11},
    {"_OUFgrad_fa_grads_precomp", (DL_FUNC) &_OUFgrad_fa_grads_precomp, 8},
    {"_OUFgrad_sb_grad_lambda_cpp", (DL_FUNC) &_OUFgrad_sb_grad_lambda_cpp, 9},
    {"_OUFgrad_sb_grad_sigma_u_cpp", (DL_FUNC) &_OUFgrad_sb_grad_sigma_u_cpp, 9},
    {"_OUFgrad_sb_grad_sigma_e_cpp", (DL_FUNC) &_OUFgrad_sb_grad_sigma_e_cpp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_OUFgrad(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
