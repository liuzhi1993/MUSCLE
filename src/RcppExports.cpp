// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// MUSCLE
List MUSCLE(NumericVector& Y, NumericVector& q, double beta, bool test, bool details);
RcppExport SEXP _muscle_MUSCLE(SEXP YSEXP, SEXP qSEXP, SEXP betaSEXP, SEXP testSEXP, SEXP detailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< bool >::type details(detailsSEXP);
    rcpp_result_gen = Rcpp::wrap(MUSCLE(Y, q, beta, test, details));
    return rcpp_result_gen;
END_RCPP
}
// DMUSCLE
List DMUSCLE(NumericVector& Y, NumericVector& q, double beta, int lag, bool test, bool details);
RcppExport SEXP _muscle_DMUSCLE(SEXP YSEXP, SEXP qSEXP, SEXP betaSEXP, SEXP lagSEXP, SEXP testSEXP, SEXP detailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type lag(lagSEXP);
    Rcpp::traits::input_parameter< bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< bool >::type details(detailsSEXP);
    rcpp_result_gen = Rcpp::wrap(DMUSCLE(Y, q, beta, lag, test, details));
    return rcpp_result_gen;
END_RCPP
}
// MMUSCLE
List MMUSCLE(NumericVector& Y, NumericMatrix& q_matrix, NumericVector& beta_vec, bool test, bool details);
RcppExport SEXP _muscle_MMUSCLE(SEXP YSEXP, SEXP q_matrixSEXP, SEXP beta_vecSEXP, SEXP testSEXP, SEXP detailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type q_matrix(q_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type beta_vec(beta_vecSEXP);
    Rcpp::traits::input_parameter< bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< bool >::type details(detailsSEXP);
    rcpp_result_gen = Rcpp::wrap(MMUSCLE(Y, q_matrix, beta_vec, test, details));
    return rcpp_result_gen;
END_RCPP
}
// MUSCLE_FULL
List MUSCLE_FULL(NumericVector& Y, NumericVector& q, double beta, bool test, bool details);
RcppExport SEXP _muscle_MUSCLE_FULL(SEXP YSEXP, SEXP qSEXP, SEXP betaSEXP, SEXP testSEXP, SEXP detailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< bool >::type details(detailsSEXP);
    rcpp_result_gen = Rcpp::wrap(MUSCLE_FULL(Y, q, beta, test, details));
    return rcpp_result_gen;
END_RCPP
}
// DMUSCLE_FULL
List DMUSCLE_FULL(NumericVector& Y, NumericVector& q, double beta, int lag, bool test, bool details);
RcppExport SEXP _muscle_DMUSCLE_FULL(SEXP YSEXP, SEXP qSEXP, SEXP betaSEXP, SEXP lagSEXP, SEXP testSEXP, SEXP detailsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type lag(lagSEXP);
    Rcpp::traits::input_parameter< bool >::type test(testSEXP);
    Rcpp::traits::input_parameter< bool >::type details(detailsSEXP);
    rcpp_result_gen = Rcpp::wrap(DMUSCLE_FULL(Y, q, beta, lag, test, details));
    return rcpp_result_gen;
END_RCPP
}
// simulQuantile_MUSCLE
NumericVector simulQuantile_MUSCLE(double p, int n, double beta);
RcppExport SEXP _muscle_simulQuantile_MUSCLE(SEXP pSEXP, SEXP nSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(simulQuantile_MUSCLE(p, n, beta));
    return rcpp_result_gen;
END_RCPP
}
// logg
NumericVector logg(NumericVector& x);
RcppExport SEXP _muscle_logg(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logg(x));
    return rcpp_result_gen;
END_RCPP
}
// simulQuantile_DMUSCLE
NumericVector simulQuantile_DMUSCLE(NumericVector& X, NumericVector& ACF, int n);
RcppExport SEXP _muscle_simulQuantile_DMUSCLE(SEXP XSEXP, SEXP ACFSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type ACF(ACFSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(simulQuantile_DMUSCLE(X, ACF, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_muscle_MUSCLE", (DL_FUNC) &_muscle_MUSCLE, 5},
    {"_muscle_DMUSCLE", (DL_FUNC) &_muscle_DMUSCLE, 6},
    {"_muscle_MMUSCLE", (DL_FUNC) &_muscle_MMUSCLE, 5},
    {"_muscle_MUSCLE_FULL", (DL_FUNC) &_muscle_MUSCLE_FULL, 5},
    {"_muscle_DMUSCLE_FULL", (DL_FUNC) &_muscle_DMUSCLE_FULL, 6},
    {"_muscle_simulQuantile_MUSCLE", (DL_FUNC) &_muscle_simulQuantile_MUSCLE, 3},
    {"_muscle_logg", (DL_FUNC) &_muscle_logg, 1},
    {"_muscle_simulQuantile_DMUSCLE", (DL_FUNC) &_muscle_simulQuantile_DMUSCLE, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_muscle(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}