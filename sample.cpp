#include <Rcpp.h>
#include <stdio.h>

// [[Rcpp::export]]
double logLikSequence(Rcpp::NumericVector startSeq, Rcpp::NumericVector endSeq, Rcpp::NumericMatrix logTransMat) {
  int seqLength = startSeq.size() ;
  double logProb = 0 ;
  for (int i = 0; i < seqLength; i++)
    logProb += logTransMat(startSeq[i]-1,endSeq[i]-1) ;
  
  return logProb ;
}

