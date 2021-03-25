

%module sum_module
%{
#define SWIG_FILE_WITH_INIT
#include "sum.h"
%}


double sum(double a,double b);





