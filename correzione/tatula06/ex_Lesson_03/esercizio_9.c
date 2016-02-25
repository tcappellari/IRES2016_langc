/*Dato un array di interi creare un nuovo array contenente gli elementi in ordine inverso
(dall’ultimo al primo).
Testare l’esercizio usando l’array [2,4,7,3,9]*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_9.h"

int es9(int a[])
{
    int lungByteA=sizeof(a);
    int singByte=sizeof(int);
    int lungA=lungByteA/singByte;
    int b[lungA];
    int i=0;
    int x=a[i];
    int j=0;
    for (i=lungA-1;i>=0;i--){
        x=a[i];
        j=lungA-1-i;
        b[j]=x;
        printf("b[%d] = %d\n",j,x);
    }
    return j,x;
}
