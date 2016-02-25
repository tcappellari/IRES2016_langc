/*Implementare una funzione che dato in input un array di interi restituisca un array contente il cubo dei valori dell’array di input.
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 3. (ovveri: 6, 12, 18, …).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cuboarray(int* input,int* output, int len){
    int i;

    for (i=0;i<len;i++){
        output[i]=input[i]*input[i]*input[i];
    }
}


int f2(){
    int a[10], b[10];
    int i;

    for (i=0;i<10;i++){
        a[i]=(i+1)*3;
    }

    cuboarray(a,b,10);

    for (i=0;i<sizeof(b)/sizeof(int);i++){
            printf("%d ", b[i]);
    }


    return(0);
}
