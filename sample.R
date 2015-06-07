library(Rcpp)
sourceCpp("sample.cpp")

library(expm)
foo <- matrix(1:9,3)
expm(foo)

sourceCpp("sample.cpp")
expm(foo)
