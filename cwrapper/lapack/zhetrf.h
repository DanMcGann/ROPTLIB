#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zhetrf_(char *uplo, integer *n, doublecomplex *a, integer *lda, integer *ipiv, doublecomplex *work, integer *lwork, integer *info);

#ifdef __cplusplus
}
#endif