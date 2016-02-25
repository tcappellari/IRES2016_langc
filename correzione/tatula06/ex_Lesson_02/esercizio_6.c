/*Si crei una funzione (di nome mult) che calcoli il prodotto di due numeri a, b maggiori o
uguali a zero, tramite l’utilizzo del solo operatore somma.
Esempio:
mult(2, 3) => 6
Testare l’esercizio stampando a console il risultato di mult(3, 5)*/

#include <stdio.h>
#include <stdlib.h>
int mult(int a,int b)
{
    int i=0;
    int somma=0;
    for(i=0;i<b;i++){
        somma=somma+a;
    }
    return somma;
}


int main()
{
    int a=3;
    int b=5;
    int risultato=mult(a,b);
    printf("%d x %d = %d\n",a,b,risultato);
}
