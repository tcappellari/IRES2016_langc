#include <stdio.h>
#include "common.h"

void creaArray(int* n,int len){
    int i;
    for (i=0;i<len;i++){
        n[i]=len-i;
    }

}

int esercizio_1 (){
    int a[20];
    int i;

    creaArray(a,20);

    stampa(a,20);

    return 0;

}
