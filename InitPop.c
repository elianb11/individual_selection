#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "InitPop.h"
#include "InitIndiv.h"
#include "add_headP.h"

ListeP InitPop(ListeP Lp) // Programme initialisant la population.
{
	int i;
	for(i=1;i<=taillePop;i++)
	{
		Lp = add_headP(Lp,InitIndiv());
	}
	return Lp;
}