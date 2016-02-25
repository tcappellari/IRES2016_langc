//----------------------------------------------------------------------
// esercizio_05.c
//----------------------------------------------------------------------
// Dato un intervallo [a, b] con a e b due interi positivi, stampare
// a console la somma di tutti i numeri compresi all’interno
// dell’intervallo, estremi inclusi. Nel caso che b fosse minore di a,
// calcolare la somma nell’intervallo [b,a].
// Testare l’esercizio usando: a = 2 e b = 8.
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int a = 2;
    int b = 8;
    int somma = 0;
    int app = 0;
    if (b<a) app = a, a = b, b = app;
    for (a=a; a<=b ; ++a)
    {
        somma = somma + a;
    }
    printf("\n%d\n\n", somma);
}
