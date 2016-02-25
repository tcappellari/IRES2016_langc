//----------------------------------------------------------------------
// esercizio_10.c
//----------------------------------------------------------------------
// Dati due interi a, n maggiori di 0, creare un array di n elementi
// contenenti a e stampare l’array a console.
// Testare l’esercizio usando a = 4, n = 9.
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a = 4;
    int n = 9;
    int ar[n];
    for (int i=0; i<n ; ++i)
    {
        ar[i] = a;
        printf("\n%d", ar[i]);
    }
    printf("\n\n");
}
