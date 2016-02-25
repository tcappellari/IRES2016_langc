/*Si crei una funzione che calcola la potenza (x^y) di due numeri x y maggiori o uguali a zero,
tramite l’utilizzo dei soli operatori somma, sottrazione e della funzione mult precedentemente
calcolata.
Esempio:
pow(2, 3) => 8
Testare l’esercizio stampando a console il risultato di pow(3, 4)*/

#include <stdio.h>
#include <stdlib.h>
int mult(int a, int b)
{
    int i=0;
    int somma=0;
    for(i=0;i<b;i++){
        somma=somma+a;
    }
    return somma;
}

int miopow(int a, int b)
{
    int i=0;
    int moltiplica=1;
    for(i=0;i<b;i++){
        moltiplica=mult(moltiplica,a);
    }
    return moltiplica;
}

int main()
{
    int a=3;
    int b=4;
    int risultato=miopow(a,b);
    printf("%d ^ %d = %d\n",a,b,risultato);
}
