#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ztbmv_(char *uplo, char *trans, char *diag, integer *n, integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer *incx);

#ifdef __cplusplus
}
#endif