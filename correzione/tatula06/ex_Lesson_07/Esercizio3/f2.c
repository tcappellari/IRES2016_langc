#include <stdio.h>
#include <stdlib.h>

int f2(int* a, int n)
{
    int b[n];
    int i=0;
    int j=3;
    int cubo=j*j*j;
    for(i=0;i<n;i++){
        printf("b[%d] = %d\n",i,cubo);
        j+=3;
        cubo=j*j*j;
    }
}

