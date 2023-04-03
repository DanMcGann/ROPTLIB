#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zhpev_(char *jobz, char *uplo, integer *n, doublecomplex *ap, doublereal *w, doublecomplex *z__, integer *ldz, doublecomplex *work, doublereal *rwork, integer *info);

#ifdef __cplusplus
}
#endif