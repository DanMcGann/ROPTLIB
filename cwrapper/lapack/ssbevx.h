#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ssbevx_(char *jobz, char *range, char *uplo, integer *n, integer *kd, real *ab, integer *ldab, real *q, integer *ldq, real *vl, real *vu, integer *il, integer *iu, real *abstol, integer *m, real *w, real *z__, integer *ldz, real *work, integer *iwork, integer *ifail, integer *info);

#ifdef __cplusplus
}
#endif