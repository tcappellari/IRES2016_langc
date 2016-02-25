/* 
## Esercizio 3
Implementare le due funzioni precendenti f1 e f2 su due coppie di files .h e .c, ovvero f1.h, f1.c , f2.h e f2.c.

Creare infine un file main.c contenente il main che stampa a console i valori come negli esercizi 1 e 2.
*/

#include <stdio.h>
#include <stdlib.h>


#include "f1.h"
#include "f2.h"


int main()
{
    int a[10];
    int len_a = sizeof(a)/sizeof(int);

    for (int i = 0; i < len_a; ++i)
        a[i] = (i + 1) * 6;

    double result = f1(a, len_a);    
    printf("result = %f\n", result);
    
    int b[10];
    int len_b = sizeof(b)/sizeof(int);

    for (int i = 0; i < len_b; ++i)
        b[i] = (i + 1) * 3;

    int c[len_b];
    f2(b, c, len_b);
    for (int i = 0; i < len_b; ++i)
        printf("%d ", c[i]);
    printf("\n");

    return EXIT_SUCCESS;
}
