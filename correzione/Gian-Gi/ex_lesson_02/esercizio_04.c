//----------------------------------------------------------------------
// esercizio_04.c
//----------------------------------------------------------------------
// Dato un array calcolarne la media.
// Testare l’esercizio usando l’array: [2,4,6,­2, 1].
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a[] = {2, 4, 6, -2, 1};
    int max = sizeof(a)/sizeof(a[0]);
    float somma = 0;
    for (int i=0; i<max ; ++i)
    {
        somma = somma + a[i];
    }
    printf("\n%.2f\n\n", somma/max);
}
