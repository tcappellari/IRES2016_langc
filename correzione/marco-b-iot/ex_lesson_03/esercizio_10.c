#include <stdio.h>
#include "common.h"

void ripeti(int* a, int el,int len){
    int i;
    for (i=0;i<len;i++)
        //*(a+1)=el;
        a[i]=el;
}


int esercizio_10 (){
    int el=4,rip=9;

//    printf("Dammi 2 numeri:");
//    scanf("%d %d",&el,&rip);

    int a[rip];
    //a=(int *)malloc(sizeof(int)*rip);
    ripeti(a,el,rip);
    stampa(a,rip);

    return 0;


}
