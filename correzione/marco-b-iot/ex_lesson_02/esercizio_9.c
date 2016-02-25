#include <stdio.h>
#include "common.h"

void inverti(int* a, int* b,int len){
    int i;
    for (i=0;i<len;i++)
        b[i]=a[len-1-i];
}



int esercizio_9 (){
    int a[]={2,4,3,7,9};
    int b[5];
    int i;

    inverti(a,b,5);
    stampa(a,5);
    //stampa(b,5);

    return 0;


}
