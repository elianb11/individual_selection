#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "add_headI.h"
#include "add_headP.h"
#include "remove_headP.h"
#include "InitIndiv.h"
#include "InitIndiv2.h"
#include "InitPop.h"
#include "printchainI.h"
#include "printchainP.h"
#include "CalcVal.h"
#include "CalcQual1.h"
#include "CalcQual2.h"
#include "CalcQual3.h"
#include "QuickSort.h"
#include "CroiserIndiv.h"
#include "CroiserPop.h"
#include "SelectIndiv.h"
#include "randIndiv.h"
#include "freePop.h"

int main()
{
	srand(time(NULL));

	ListeP LP = NULL;
	int i;

	LP = InitPop(LP);

	for(i=1;i<=nGen;i++)
	{
		LP = CroiserPop(LP);

		LP = QuickSort(LP);

		SelectIndiv(LP);

	}
	printf("Le meilleur individu ----> [ ");
	printchainI(LP->individu);
	printf("]\nQualité ----> %f.\n",LP->qualite);
}
