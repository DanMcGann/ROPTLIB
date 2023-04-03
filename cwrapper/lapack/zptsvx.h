#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zptsvx_(char *fact, integer *n, integer *nrhs, doublereal *d__, doublecomplex *e, doublereal *df, doublecomplex *ef, doublecomplex *b, integer *ldb, doublecomplex *x, integer *ldx, doublereal *rcond, doublereal *ferr, doublereal *berr, doublecomplex *work, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif