library(expm)

foo <- matrix(1:9,3)
expm(foo)

Rcpp::sourceCpp("sample.cpp")
expm(foo)

