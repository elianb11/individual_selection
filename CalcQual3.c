#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "CalcQual3.h"

double CalcQual3(int q) // Programme calculant la qualité d'un individu donné.
{
	double X;
	X = (double) (q/pow(2,longIndiv))*(B-A)+A;
	return -cos(X);
}