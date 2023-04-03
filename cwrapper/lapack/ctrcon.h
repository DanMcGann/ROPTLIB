#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ctrcon_(char *norm, char *uplo, char *diag, integer *n, complex *a, integer *lda, real *rcond, complex *work, real *rwork, integer *info);

#ifdef __cplusplus
}
#endif