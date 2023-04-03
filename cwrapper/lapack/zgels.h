#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int zgels_(char *trans, integer *m, integer *n, integer *nrhs, doublecomplex *a, integer *lda, doublecomplex *b, integer *ldb, doublecomplex *work, integer *lwork, integer *info);

#ifdef __cplusplus
}
#endif