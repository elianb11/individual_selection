#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "setup.c"

#include "QuickSort.h"
#include "add_headP.h"

ListeP QuickSort(ListeP l)
{
    //renvoie la liste vide si elle est vide
    if(l==NULL)
    {
        return l;
    }
    else
    {
        //renvoie l'élément unique si la liste contient un seul élément
        if(l->nextP==NULL)
        {
            return l;
        }
        else
        {
            ListeP S1=NULL,S2=NULL,l1;
            //on prend le premier élément de la liste en tant que pivot
            double qualite_pivot = l->qualite;
            ListeI indiv_pivot = l->individu;
            //création des listes S1 et S2 : chaque élément de S2 est inférieur à chaque élément de S1
            while(l->nextP != NULL)
            {
                l=l->nextP;
                if(l->qualite >= qualite_pivot)
                {
                    S1=add_headP(S1,l->individu);
                }
                else
                {
                    S2=add_headP(S2,l->individu);
                }
            }
            //triage récursif des listes S1 et S2
            S1=QuickSort(S1);
            S2=QuickSort(S2);
            //insertion du pivot en tête de liste S2 triée
            S2=add_headP(S2,indiv_pivot);
            //concaténation des deux listes S1 et S2 si S1 contient plus de deux éléments
            if(S1!=NULL)
            {
                l1=S1;
                if(S1->nextP!=NULL)
                {
                    while(S1->nextP!=NULL)
                    {
                        S1=S1->nextP;
                    }
                    S1->nextP=S2;
                    //renvoie la liste concaténée triée par ordre décroissant si S1 contient 2 éléments ou plus
                    return l1;
                }
                else
                {
                    l1->nextP=S2;
                    //renvoie la liste concaténée triée par ordre décroissant si S1 contient un seul élément
                    return l1;
                }
            }
            //renvoie la liste S2 triée par ordre décroissant si S1 ne contient aucun élément
            return S2;
        }
    }
}
