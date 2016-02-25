//----------------------------------------------------------------------
// esercizio_09.c
//----------------------------------------------------------------------
// Dato un array di interi creare un nuovo array contenente gli elementi
// in ordine inverso (dall’ultimo al primo).
// Testare l’esercizio usando l’array [2,4,7,3,9].
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a[] = {2, 4, 7, 3, 9};
    int max = sizeof(a)/sizeof(a[0]);
    int b[max];

    for (int i=0, k=max-1; i<max, k>=0; ++i, --k)
    {
        b[k] = a[i];
    }
    for (int i=0; i<max; ++i)
    {
        printf("\n%d %d", a[i], b[i]);
    }
    printf("\n\n");
}
