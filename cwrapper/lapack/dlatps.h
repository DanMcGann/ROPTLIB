#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int dlatps_(char *uplo, char *trans, char *diag, char *normin, integer *n, doublereal *ap, doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);

#ifdef __cplusplus
}
#endif