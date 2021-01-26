#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "randIndiv.h"
#include "copieIndiv.h"

ListeI randIndiv(ListeP Lp,int i)
{
	int n=1;
	while(n<i && Lp->nextP != NULL)
	{
		Lp = Lp->nextP;
		n++;
	}
	return copieIndiv(Lp->individu);
}