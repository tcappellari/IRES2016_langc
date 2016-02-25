#include <stdio.h>
#include "esercizio_6.h"


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
int esercizio_7(){
    int a=3,b=5;
    //printf("Dammi i valori");
    //scanf("%d %d",&a, &b);
    printf("%d ",pot_rec(a,b));
    return 0;

}
