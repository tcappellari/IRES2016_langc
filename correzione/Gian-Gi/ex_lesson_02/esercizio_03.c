//----------------------------------------------------------------------
// esercizio_03.c
//----------------------------------------------------------------------
// Dato un numero n, stampare a console la somma dei primi n numeri
// interi positivi dispari. Testare l’esercizio usando n = 50.
//----------------------------------------------------------------------


#include <stdio.h>

void main()
{
    int Max = 50;
    int somma = 0;
    for (int i=0; i<Max ; ++i)
    {
        if (i%2 != 0) somma += i;
    }
    printf("\n%d\n\n", somma);
}
