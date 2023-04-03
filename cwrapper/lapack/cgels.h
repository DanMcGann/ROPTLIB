#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int cgels_(char *trans, integer *m, integer *n, integer *nrhs, complex *a, integer *lda, complex *b, integer *ldb, complex *work, integer *lwork, integer *info);

#ifdef __cplusplus
}
#endif