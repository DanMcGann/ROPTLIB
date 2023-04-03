#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ssbmv_(char *uplo, integer *n, integer *k, real *alpha, real *a, integer *lda, real *x, integer *incx, real *beta, real *y, integer *incy);

#ifdef __cplusplus
}
#endif