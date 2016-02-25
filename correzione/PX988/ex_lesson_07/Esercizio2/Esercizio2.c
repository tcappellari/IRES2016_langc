/* 
## Esercizio 2
Implementare una funzione che dato in input un array di interi restituisca un array contente il cubo dei valori dell’array di input.
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 3. (ovveri: 6, 12, 18, …).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// l'array di destinazione DEVE eguagliare la dimensione dell'array sorgente
void cube(int* src, int* des, int len)
{
    for (int i = 0; i < len; ++i)
        des[i] = pow(src[i], 3);
}


int main()
{
    int a[10];
    int len = sizeof(a)/sizeof(int);

    for (int i = 0; i < len; ++i)
        a[i] = (i + 1) * 3;

    int b[len];
    cube(a, b, len);
    for (int i = 0; i < len; ++i)
        printf("%d ", b[i]);
    printf("\n");

    return EXIT_SUCCESS;
}
