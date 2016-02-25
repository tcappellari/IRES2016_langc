#include <stdio.h>
#include "mult.h"



int pot(int a, int b){
    int i,temp=1;
    for (i=0;i<b;i++){
        temp=moltiplica(a,temp);
    }
    return temp;
}
int pot_rec(int a,int b){
    int temp;
    if (b==0)
        return 1;
    if (!(b%2)){
        temp=pot_rec(a, b/2);
        return moltiplica(temp,temp);

    }else
        return a*pot_rec(a, b-1);
}

void main(){
    int a,b;
    printf("Dammi i valori");
    scanf("%d %d",&a, &b);
    printf("%d^%d è %d\n",a,b,pot_rec(a,b));
}
