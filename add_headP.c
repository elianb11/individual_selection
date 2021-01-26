#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "add_headP.h"
#include "CalcQual1.h"
#include "CalcQual2.h"
#include "CalcQual3.h"
#include "CalcVal.h"

ListeP add_headP(ListeP Lp,ListeI a) // Programme ajoutant un individu en tête de liste.
{
	ListeP T;
	T = (Pop*)malloc(sizeof(Pop));
	T->individu = a;
	T->qualite = CalcQual1(CalcVal(a));
	T->nextP = Lp;
	return T;
}