#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "CroiserPop.h"
#include "CroiserIndiv.h"
#include "randIndiv.h"
#include "freePop.h"
#include "add_headP.h"

ListeP CroiserPop(ListeP Lp)
{
	int n, i, j;
	int checkPop[taillePop] = { 0 };
	ListeI rand1 ,rand2;
	ListeP newLp = NULL;

	for(n=0;n<taillePop/2;n++)
	{
		do
		{
			i = rand()%taillePop + 1;
		}
		while(checkPop[i-1]);
		checkPop[i-1]=1;

		do
		{
			j = rand()%taillePop + 1;
		}
		while(checkPop[j-1]);
		checkPop[j-1]=1;

		rand1 = randIndiv(Lp,i);
		rand2 = randIndiv(Lp,j);

		CroiserIndiv(rand1,rand2);

		newLp = add_headP(newLp,rand1);
		newLp = add_headP(newLp,rand2);
	}

	if(taillePop%2)
	{
		do
		{
			i = rand()%taillePop + 1;
		}
		while(checkPop[i-1]);
		checkPop[i-1]=1;
		rand1 = randIndiv(Lp,i);
		newLp = add_headP(newLp,rand1);
	}

	Lp = freePop(Lp);
	return newLp;
}