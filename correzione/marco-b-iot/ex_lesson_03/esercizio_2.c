#include <stdio.h>

int somma(int* a,int fine){
    int i=0, somma=0;
    for (i=0;i<fine;i++){
        if (a[i]>=0)
            somma+=*(a+i);
        else
            break;
    }
    /*
    while ((a[i]>0)&&(i<fine)){
        somma+=a[i++];
    }*/

    return somma;
}

int esercizio_2(){

    int da_sommare[]={1,3,5,6,-1,2};
    printf("%d ",somma(da_sommare,5));
    return 0;
}
