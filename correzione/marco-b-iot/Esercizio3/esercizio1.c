/*Creare una funzione che accetti in input un array di interi e restituisca la radice quadrata della somma dei quadrati dei valori contenuti.

Nota: per calcolare la radice quadrata utilizzare la funzione:

#include <math.h>
double sqrt(double x);

Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 6. (ovveri: 6, 12, 18, …).

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sqsq(int* input, int len){
    int i,sum=0;

    for (i=0;i<len;i++){
        sum+=input[i]*input[i];
    }
    return sqrt((double)sum);

}


int f1(){
    int a[10];
    int i;

    for (i=0;i<10;i++){
        a[i]=(i+1)*6;
    }

    printf("%f\n",sqsq(a,10));


    return(0);
}
