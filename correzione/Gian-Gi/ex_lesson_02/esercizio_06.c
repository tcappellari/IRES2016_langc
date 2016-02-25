//----------------------------------------------------------------------
// esercizio_06.c
//----------------------------------------------------------------------
// Si crei una funzione (di nome mult) che calcoli il prodotto di due
// numeri a, b maggiori o uguali a zero, tramite l’utilizzo del solo
// operatore somma.
// Testare l’esercizio stampando a console il risultato di mult(3, 5).
//----------------------------------------------------------------------

#include <stdio.h>

int mult(int a, int b)
{
    int k = 0;
    if (a==0 || b==0) return 0;
    for (int i=0; i<a; ++i)
    {
        k += b;
    }
    return k;
}

void main()
{
    int a = 3;
    int b = 5;
    printf("\n%d\n\n", mult(a,b));
}
