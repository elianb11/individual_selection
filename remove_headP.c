#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "remove_headP.h"


ListeP remove_headP(ListeP Lp)
{
	ListeP T;
	if(Lp != NULL)
	{
		T = Lp->nextP;
		free(Lp);
	}
	return T;
}
