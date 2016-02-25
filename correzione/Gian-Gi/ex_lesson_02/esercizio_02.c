//----------------------------------------------------------------------
// esercizio_02.c
//----------------------------------------------------------------------
// Dato un array di interi stampare a console la somma dei valori
// contenuti nell’array partendo dall’indice 0 fino a che non viene
// trovato un valore negativo.
// Testare l’esercizio usando l’array: [2,4,6,­2, 1].
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a[] = {2, 4, 6, -2, 1};
    int max = sizeof(a)/sizeof(a[0]);
    int somma = 0;
    for (int i=0; i<max ; ++i)
    {
        if (a[i] > 0)
            somma = somma + a[i];
	else
            break;
    }
    printf("\n%d\n\n", somma);
}
