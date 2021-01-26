#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "add_headI.h"


ListeI add_headI(ListeI Li,Bit a) // Programme ajoutant un bit en tête de liste.
{
	ListeI T;
	T = (Indiv*)malloc(sizeof(Indiv));
	T->bit = a;
	T->nextI = Li;
	return T;
}