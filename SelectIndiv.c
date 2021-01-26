#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "SelectIndiv.h"

void SelectIndiv(ListeP Lp) // Programme effectuant la selection d'une proportion (tSelect) de la population par rapport à la qualité des individus.
{
	int nbSelect = (taillePop * tSelect)/100; 
	int i;
	ListeP LpC = Lp;
	for(i=1;i<=nbSelect;i++) // Boucle qui permet de placer un pointeur sur le premier élément de la liste qui ne sera pas dans la proportion séléctionnée.
	{
		LpC = LpC->nextP; 
	}
	ListeP LpC2 = Lp;
	while(LpC != NULL) // Les pointeurs LpC et LpC2 parcourent la population en même temps en remplacant les individus qui ne sont pas séléctionnés.
	{
		LpC->individu = LpC2->individu;
		LpC->qualite = LpC2->qualite;
		LpC = LpC->nextP;
		LpC2 = LpC2->nextP;
		i++;
	}
}
