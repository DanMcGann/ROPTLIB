#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int cspmv_(char *uplo, integer *n, complex *alpha, complex *ap, complex *x, integer *incx, complex *beta, complex *y, integer *incy);

#ifdef __cplusplus
}
#endif