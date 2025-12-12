#ifndef BLULIB
#define BLULIB

#include <stdio.h>

/*LOG.H*/
#define  PREINFO "\x1b[38,2,0,255,0m[INFO] \x1b[0m"
#define  PREWARN "\x1b[38,2,255,255,0m[WARN] \x1b[0m"
#define PREERROR "\x1b[38,2,255,0,0m[ERROR] \x1b[0m" 

void prInfo(char* info);
void prWarn(char* warning);
void prError(char* error);
/*END OF LOG.H*/

#endif
