#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zpbcon_(char *uplo, integer *n, integer *kd, doublecomplex *ab, integer *ldab, doublereal *anorm, doublereal *rcond, doublecomplex *work, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif