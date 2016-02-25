/*Creare una funzione che accetti in input un array di interi e restituisca la radice quadrata della somma dei quadrati dei valori contenuti. Nota: per calcolare la radice quadrata utilizzare la funzione:

#include <math.h>
double sqrt(double x);
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 6. (ovveri: 6, 12, 18, …).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TC: era richiesto di creare array e poi creare funzione che
// accetta array.
// Qui hai creato funzione che crea e calcola.
int es1(int n)
{
    int a[n];
    int i=0;
    int j=6;
    int q=j*j; // TC: meglio eliminare questa riga e inserire sul ciclo for: (vedi sotto)
    int somma=0;
    for (i=0;i<n;i++){
        somma=somma+q; // TC: somma = somma + j*j
        j+=6;
        q=j*j;
    }
    double ris=sqrt(somma);
    printf("quadrato = %.2f\n",ris);
    return ris;
}

int main()
{
    int n=10;
    int ris=es1(n);
}
