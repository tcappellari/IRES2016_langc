/*Dato un numero n, stampare a console la somma dei primi n numeri interi positivi dispari.
Testare l’esercizio usando n = 50*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_3.h"

int es3(int n)
{
    int a[n];
    int i=0;
    int j=1;
    int somma=0;
    for (i=0;i<n;i++){
        a[i]=i;
        somma = somma+j;
        j=j+2;
    }
    return somma;
}
