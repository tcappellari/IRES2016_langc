/* 
## Esercizio 1
Creare una funzione che accetti in input un array di interi e restituisca la radice quadrata della somma dei quadrati dei valori contenuti.
Nota: per calcolare la radice quadrata utilizzare la funzione:
```sh
#include <math.h>
double sqrt(double x);
```
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 6. (ovveri: 6, 12, 18, …).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TC: usa sum con double così eviti il casting
double rss(int* numbers, int len)
{
    int sum = 0;
    for (int i = 0; i < len; ++i)
        sum += pow(numbers[i], 2);
    
    return sqrt((double) sum);
}


int main()
{
    int a[10];
    int len = sizeof(a)/sizeof(int);

    for (int i = 0; i < len; ++i)
        a[i] = (i + 1) * 6;

    double result = rss(a, len);    
    printf("result = %f\n", result);

    return EXIT_SUCCESS;
}
