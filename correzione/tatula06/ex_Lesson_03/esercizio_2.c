/*Dato un array di interi stampare a console la somma dei valori contenuti nell’array partendo
dall’indice 0 fino a che non viene trovato un valore negativo.
Testare l’esercizio usando l’array: [2,4,6,-2,1].*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_2.h"

int es2(int a[])
{
   //int a[]={2,4,6,-2,1};
   int i=0;
   int x=a[i];
   int somma = 0;
   while (x>0){
       somma = somma+x;
       i=i+1;
       x=a[i];
   }
   return somma;
}
