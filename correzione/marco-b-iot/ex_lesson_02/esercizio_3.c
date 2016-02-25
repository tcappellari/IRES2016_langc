#include <stdio.h>

int somma_dispari(int n){
    int i=0;
    int somma=0;
    for (i=0;i<n;i++){
        somma+=2*i+1;
    }
    return somma;
}

int esercizio_3(){

    printf("%d ",somma_dispari(50));
    return 0;

}
