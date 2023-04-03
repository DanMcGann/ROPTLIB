#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int strsv_(char *uplo, char *trans, char *diag, integer *n, real *a, integer *lda, real *x, integer *incx);

#ifdef __cplusplus
}
#endif