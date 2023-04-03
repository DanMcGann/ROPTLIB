#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ctrsv_(char *uplo, char *trans, char *diag, integer *n, complex *a, integer *lda, complex *x, integer *incx);

#ifdef __cplusplus
}
#endif