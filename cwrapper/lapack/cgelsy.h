#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int cgelsy_(integer *m, integer *n, integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, integer *jpvt, real *rcond, integer *rank, complex *work, integer *lwork, real *rwork, integer *info);

#ifdef __cplusplus
}
#endif