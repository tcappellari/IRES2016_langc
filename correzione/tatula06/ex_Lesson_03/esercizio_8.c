/*Dato un array di interi stampare a console gli elementi in ordine inverso (dall’ultimo al primo)
Testare l’esercizio usando l’array [2,4,7,3,9]*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_8.h"

int es8(int a[])
{
    int lungByteA=sizeof(a);
    int singByte=sizeof(int);
    int lungA=lungByteA/singByte;
    int i=0;
    int x=a[i];
    int r=0;
    for (i=lungA-1;i>=0;i--){
        int x=a[i];
        printf("a[%d] = %d\n",i,x);
    }
    return i,x;
}
