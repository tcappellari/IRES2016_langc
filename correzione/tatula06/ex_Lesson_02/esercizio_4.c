/*Dato un array calcolarne la media.
Testare l’esercizio usando l’array: [2,4,6,-2,1].*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={2,4,6,-2,1};
    int lungByteA=sizeof(a);
    int singByte=sizeof(int);
    int lungA=lungByteA/singByte;
    int i=0;
    float somma=0;
    float media=0;
    for(i=0;i<lungA;i++){
        int x=a[i];
        somma=somma+x;
    }
    media=somma/lungA;
    printf("Media = %.2f\n",media);
}
