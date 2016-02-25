/*Dato un array di interi creare un nuovo array contenente gli elementi in ordine inverso
(dall’ultimo al primo).
Testare l’esercizio usando l’array [2,4,7,3,9]*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={2,4,7,3,9};
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
}
