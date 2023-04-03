#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int ssygvd_(integer *itype, char *jobz, char *uplo, integer *n, real *a, integer *lda, real *b, integer *ldb, real *w, real *work, integer *lwork, integer *iwork, integer *liwork, integer *info);

#ifdef __cplusplus
}
#endif