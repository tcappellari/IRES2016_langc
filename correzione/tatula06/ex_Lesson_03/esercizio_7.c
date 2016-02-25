/*Si crei una funzione che calcola la potenza (x^y) di due numeri x y maggiori o uguali a zero,
tramite l’utilizzo dei soli operatori somma, sottrazione e della funzione mult precedentemente
calcolata.
Esempio:
pow(2, 3) => 8
Testare l’esercizio stampando a console il risultato di pow(3, 4)*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_6.h"
//#include "esercizio_7.h"

int es7(int a, int b)
{
    int i=0;
    int moltiplica=1;
    for (i=0;i<b;i++){
        moltiplica=es6(moltiplica,a);
    }
    return moltiplica;
}
