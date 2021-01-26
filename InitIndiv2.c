#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "InitIndiv2.h"
#include "add_headI.h"

ListeI InitIndiv2(ListeI Li, int n) // Programme initialisant les bits d'un individu donné (méthode récursive).
{
	if(n==1)
	{
		return add_headI(Li,rand()%2);
	}
	else
	{
		return InitIndiv2(add_headI(Li,rand()%2),n-1);
	}
}