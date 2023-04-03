#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zhpcon_(char *uplo, integer *n, doublecomplex *ap, integer *ipiv, doublereal *anorm, doublereal *rcond, doublecomplex *work, integer *info);

#ifdef __cplusplus
}
#endif