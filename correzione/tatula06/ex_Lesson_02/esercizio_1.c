/*Creare un array di 20 elementi contenente i valori da 20 a 1 compresi e stampare i valori a
console*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=20;
   int a[n];
   int lungByteA=sizeof(a);
   int singByte=sizeof(int);
   int lungA=lungByteA/singByte;
   int i=0;
   int j=lungA;
   for (i=0;i<lungA;i++){
        a[i]=i;
        printf("a[%d] = %d\n",i,j);
        j=j-1;
   }
}
