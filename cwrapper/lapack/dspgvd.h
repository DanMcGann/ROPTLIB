#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int dspgvd_(integer *itype, char *jobz, char *uplo, integer *n, doublereal *ap, doublereal *bp, doublereal *w, doublereal *z__, integer *ldz, doublereal *work, integer *lwork, integer *iwork, integer *liwork, integer *info);

#ifdef __cplusplus
}
#endif