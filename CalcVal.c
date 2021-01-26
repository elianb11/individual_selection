#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "CalcVal.h"

int CalcVal(ListeI Li) // Programme calculant la valeur d'un individu donné.
{
	int i = 0;
	int S = 0;
	while(Li != NULL)
	{
		S = S + Li->bit*pow(2,i);
		i++;
		Li = Li->nextI;
	}
	return S;
}