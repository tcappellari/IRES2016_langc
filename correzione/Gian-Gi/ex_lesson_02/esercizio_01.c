//----------------------------------------------------------------------
// esercizio_01.c
//----------------------------------------------------------------------
// Creare un array di 20 elementi contenente i valori da 20 a 1 compresi
// e stampare i valori a console.
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a[20];
    for (int i=0; i<20; ++i)
    {
        a[i] = 20 - i;
        printf("\n%2d", a[i]);
    }
    printf("\n\n");
}
