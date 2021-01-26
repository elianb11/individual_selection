#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "remove_headI.h"


ListeI remove_headI(ListeI Li)
{
	ListeI T;
	if(Li != NULL)
	{
		T = Li->nextI;
        free(Li);
	}
	return T;
}
