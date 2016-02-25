#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   SIZE  10

// TC: era richiesta implementazione su funzione

int main()
{
       // Dichiaro un array di nome SIZE
       int a[SIZE] = {3,6,9,12,15,18,21,24,27,30,};
       // Dichiaro due variabili
       int i, total = 0;
       // Ciclo for
       
       for(i = 0; i <= (SIZE-1); i++)
       {
              // Array elementi al cubo
              total = pow(a[i], 3);
              printf("\n a[%d]= %d", i, total);
       }
       
    return  0;
}