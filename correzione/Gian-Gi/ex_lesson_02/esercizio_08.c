//----------------------------------------------------------------------
// esercizio_08.c
//----------------------------------------------------------------------
// Dato un array di interi stampare a console gli elementi in ordine
// inverso (dall’ultimo al primo).
// Testare l’esercizio usando l’array [2,4,7,3,9].
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a[] = {2, 4, 7, 3, 9};
    int max = sizeof(a)/sizeof(a[0]);
    for (int i=max-1; i>=0; --i)
    {
        printf("\n%d", a[i]);
    }
    printf("\n\n");
}
