#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "printchainI.h"

void printchainI(ListeI Li)
{
	if (Li==NULL)
	{
		printf("Liste vide.\n");
	}
	else
	{
		while(Li != NULL)
		{
			printf("%i ",Li->bit);
			Li = Li->nextI;
		}
	}
}