#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "freePop.h"
#include "remove_headP.h"
#include "remove_headI.h"

ListeP freePop(ListeP Lp)
{
	while(Lp != NULL)
	{
		//while(Lp->individu != NULL)
		//{
			//Lp->individu = remove_headI(Lp->individu);
		//}
        free(Lp->individu);	}
	return Lp;
}
