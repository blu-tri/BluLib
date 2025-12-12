#include <stdio.h>
#include "../include/blulib.h"

/*LOG.H*/
void prInfo(char* info)
{
	printf("%s%s", PREINFO, info);
}

void prWarn(char* warning)
{
	printf("%s%s", PREWARN, warning);
}

void prError(char* error)
{
	printf("%s%s", PREERROR, error);
}
/*END OF LOG.H*/
