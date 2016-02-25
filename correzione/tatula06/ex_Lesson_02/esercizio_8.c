/*Dato un array di interi stampare a console gli elementi in ordine inverso (dall’ultimo al primo)
Testare l’esercizio usando l’array [2,4,7,3,9]*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={2,4,7,3,9};
    int lungByteA=sizeof(a);
    int singByte=sizeof(int);
    int lungA=lungByteA/singByte;
    int i=0;
    int x=a[i];
    for (i=lungA-1;i>=0;i--){
        int x=a[i];
        printf("a[%d] = %d\n",i,x);
    }
}
