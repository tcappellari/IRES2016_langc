#include <stdio.h>

float media(int* a,int array_size){
    int i;
    int somma=0;
    for (i=0;i<array_size;i++){
        somma+=*(a+i);
    }
    //printf("somma: %d",somma);
    return (float)somma/array_size;
}
int esercizio_4(){
    int da_sommare[]={2,4,6,-2,1};
    printf("%f ",media(da_sommare,5));
    return 0;
}

