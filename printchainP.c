#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "printchainP.h"
#include "printchainI.h"

void printchainP(ListeP Lp)
{
	printf("\n");
	if (Lp==NULL)
	{
		printf("Liste vide.\n");
	}
	else
	{
		while(Lp != NULL)
		{
			printchainI(Lp->individu);
			printf("\n%f\n\n",Lp->qualite);
			Lp = Lp->nextP;
		}
	}
}