#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int cggbal_(char *job, integer *n, complex *a, integer *lda, complex *b, integer *ldb, integer *ilo, integer *ihi, real *lscale, real *rscale, real *work, integer *info);

#ifdef __cplusplus
}
#endif