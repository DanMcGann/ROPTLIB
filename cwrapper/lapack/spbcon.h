#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int spbcon_(char *uplo, integer *n, integer *kd, real *ab, integer *ldab, real *anorm, real *rcond, real *work, integer *iwork, integer *info);

#ifdef __cplusplus
}
#endif