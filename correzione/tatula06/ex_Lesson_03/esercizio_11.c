/*Data un array di interi A, si crei un nuovo array B contenente gli elementi dell’array A
riordinato in modo tale che tutti gli elementi dispari precedano nello stesso ordine tutti gli
elementi pari.
Esempio
Input: A = [2, 5, 1, 8]
Output: B = [5, 1, 2, 8]
Testare l’esercizio stampando a console l’array B usando l’array A = {2,4,7,3,2,9,5}*/

#include <stdio.h>
#include <stdlib.h>

//#include "esercizio_11.h"

int es11(int A[])
{
    int lungByteA=sizeof(A);
    int singByte=sizeof(int);
    int lungA=lungByteA/singByte;
    int B[lungA];
    int i=0;
    int x=A[i];
    int j=0;
    for (i=0;i<lungA;i++){
        x=A[i];
        if(x%2!=0){
            B[j]=x;
            printf("B[%d] = %d\n",j,x);
            j=j+1;
        }
    }
    for (i=0;i<lungA;i++){
        x=A[i];
        if(x%2==0){
            B[j]=x;
            printf("B[%d] = %d\n",j,x);
            j=j+1;
        }
    }
    return j,x;
}
