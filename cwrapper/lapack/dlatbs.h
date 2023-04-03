#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int dlatbs_(char *uplo, char *trans, char *diag, char *normin, integer *n, integer *kd, doublereal *ab, integer *ldab, doublereal *x, doublereal *scale, doublereal *cnorm, integer *info);

#ifdef __cplusplus
}
#endif