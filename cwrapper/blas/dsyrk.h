#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int dsyrk_(char *uplo, char *trans, integer *n, integer *k, doublereal *alpha, doublereal *a, integer *lda, doublereal *beta, doublereal *c__, integer *ldc);

#ifdef __cplusplus
}
#endif