#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "InitIndiv.h"
#include "add_headI.h"

ListeI InitIndiv() // Programme d'initialisation des bits d'un individu donné.
{
	int i;
	ListeI Li = NULL;
	for(i=1;i<=longIndiv;i++)
	{
		Li = add_headI(Li,rand()%2);
	}
	return Li;
}