#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "CalcQual1.h"

double CalcQual1(int q) // Programme calculant la qualité d'un individu donné.
{
	double X;
	X = (double) (q/pow(2,longIndiv))*(B-A)+A;
	return -(X*X);
}