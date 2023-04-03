#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int chemv_(char *uplo, integer *n, complex *alpha, complex *a, integer *lda, complex *x, integer *incx, complex *beta, complex *y, integer *incy);

#ifdef __cplusplus
}
#endif