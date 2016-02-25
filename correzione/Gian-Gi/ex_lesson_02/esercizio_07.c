//----------------------------------------------------------------------
// esercizio_07.c
//----------------------------------------------------------------------
// Si crei una funzione che calcola la potenza (x^y) di due numeri x e y
// maggiori o uguali a zero, tramite l’utilizzo dei soli operatori
// somma, sottrazione e della funzione mult precedentemente calcolata.
// Testare l’esercizio stampando a console il risultato di pot(3, 4).
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

int pot(int a, int b)
{
    if (a==1 || b==0) return 1;
    if (a==0) return 0;
    int prodotto = a;
    for (int i=1; i<b; ++i)
    {
        prodotto = mult(prodotto, a);
    }
    return prodotto;
}

void main()
{
    int a = 3;
    int b = 4;
    if (a==0 && b==0)
    {
        printf("\n Calcolo impossibile: base ed esponente entrambi zero !\n\n");
    }
    else
    {
        printf("\n%d\n\n", pot(a, b));
    }
}
