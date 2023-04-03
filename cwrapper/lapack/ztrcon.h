#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ztrcon_(char *norm, char *uplo, char *diag, integer *n, doublecomplex *a, integer *lda, doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif