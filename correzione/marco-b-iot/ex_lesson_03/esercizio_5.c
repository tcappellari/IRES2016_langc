#include <stdio.h>

int somma_intervallo(int a,int b){
    int somma,min,i;

    min=(a<b)?a:b;
    b=(min<b)?b:a;

    for (i=min;i<=b;i++){
        somma+=i;
    }
    return somma;
}

int esercizio_5(){
    int a=2,b=8;
    printf("%d ",somma_intervallo(a,b));
    return 0;


    /*printf("Dammi gli estremi");
    scanf("%d %d",&a, &b);
    printf("La somma è %d\n",somma(a,b));*/
}
