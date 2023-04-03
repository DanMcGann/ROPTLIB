#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int dgetrs_(char *trans, integer *n, integer *nrhs, doublereal *a, integer *lda, integer *ipiv, doublereal *b, integer *ldb, integer *info);

#ifdef __cplusplus
}
#endif