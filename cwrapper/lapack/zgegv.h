#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zgegv_(char *jobvl, char *jobvr, integer *n, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, doublecomplex *alpha, doublecomplex *beta, doublecomplex *vl, integer *ldvl, doublecomplex *vr, integer *ldvr, doublecomplex *work, integer *lwork, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif