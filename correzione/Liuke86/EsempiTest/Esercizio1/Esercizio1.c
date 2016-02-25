#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   SIZE  10

// TC: era richiesto l'implementazione su funzione.
int main()
{
       // dichiaro un array di nome SIZE
       int a[SIZE] = {6, 12, 18, 25, 30, 36, 42, 48, 54, 60};
       int i, total = 0;
       // Ciclo for
       for(i = 0; i <= (SIZE-1); i++)
       {
            //Somma delle potenze
            total += pow(a[i], 2);
       }
       double square = 0;
       square = sqrt(total);
       printf("\nLa radice quadrata è %f\n", square);
       return  0;
}
