#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zgelss_(integer *m, integer *n, integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, doublereal *s, doublereal *rcond, integer *rank, doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif