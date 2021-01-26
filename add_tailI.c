#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "add_tailI.h"

ListeI add_tailI(ListeI Li, Bit b)
{
	ListeI T;
	T = (Indiv*)malloc(sizeof(Indiv));
	T->bit = b;
	T->nextI = NULL;
	if(Li == NULL)
	{
		return T;
	}
	else
	{
		ListeI P = Li;
		while(P->nextI != NULL)
		{
			P = P->nextI;
		}
		P->nextI = T;
		return Li;
	}
}