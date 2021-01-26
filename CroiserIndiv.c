#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

void CroiserIndiv(ListeI Li1,ListeI Li2) // Programme inversant les bits de deux individus donnés avec probabilité.
{
	int T;
 	while(Li1 != NULL)
 	{
 		if(rand()%2) // 50% de chance d'inverser les bits (pCroise = 0,5)
 		{
 			T = Li1->bit;
 			Li1->bit = Li2->bit;
 			Li2->bit = T;
 		}
 		Li1 = Li1->nextI;
 		Li2 = Li2->nextI;
 	}
}