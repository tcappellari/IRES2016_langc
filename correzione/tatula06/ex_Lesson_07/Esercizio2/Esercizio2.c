/*Implementare una funzione che dato in input un array di interi restituisca un array contente il cubo dei valori
dell’array di input. Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri
interi divisibili per 3. (ovveri: 3, 6, 9, …).*/

#include <stdio.h>
#include <stdlib.h>

// TC: avrebbe dovuto restituire su a l'array
int es2(int* a, int n)
{
    int b[n];
    int i=0;
    int j=3;
    int cubo=j*j*j; // vedi commento esercizio 1
    for(i=0;i<n;i++){
        // TC: a[i] = j*j*j;
        printf("b[%d] = %d\n",i,cubo);
        j+=3;
        cubo=j*j*j;
    }
}

int main()
{
    int n=10;
    int a[n];
    int ris=es2(a,n);
}
