#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "add_tailI.h"
#include "copieIndiv.h"

ListeI copieIndiv(ListeI Li)
{
	ListeI newLi = NULL;
	while(Li != NULL)
	{
		newLi = add_tailI(newLi,Li->bit);
		Li = Li->nextI;
	}
	return newLi;
}