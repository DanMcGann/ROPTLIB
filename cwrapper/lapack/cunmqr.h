#ifdef __cplusplus
extern "C" { 
#endif  

#include "cwrapper/f2c.h" 

int cunmqr_(char *side, char *trans, integer *m, integer *n, integer *k, complex *a, integer *lda, complex *tau, complex *c__, integer *ldc, complex *work, integer *lwork, integer *info);

#ifdef __cplusplus
}
#endif