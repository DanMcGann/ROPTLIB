#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int sgelsd_(integer *m, integer *n, integer *nrhs, real *a, integer *lda, real *b, integer *ldb, real *s, real *rcond, integer *rank, real *work, integer *lwork, integer *iwork, integer *info);

#ifdef __cplusplus
}
#endif