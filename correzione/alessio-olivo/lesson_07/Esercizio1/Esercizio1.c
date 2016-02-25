#include<stdio.h>
#include<math.h>

// TC: step? perchè fai il module 6?
int somma_quadrati(int a[], int dimensione, int step) {

    int quadrato;
    double somma = 0;
    for(int i = 0; i < dimensione; ++i) {
        if(a[i] % step == 0) {
            quadrato = a[i] * a[i];
            somma = somma + quadrato;
        }
    }
    return sqrt(somma);
}

int main(){
    int array[] = {1, 6, 5};
    int dimensione_array = 3;
    int intervallo = 6;

    double risultato = somma_quadrati(array, dimensione_array, intervallo);
    printf("Risultato: %f\n", risultato);
}
