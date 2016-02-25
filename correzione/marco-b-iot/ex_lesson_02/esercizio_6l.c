#include <stdio.h>

int moltiplica(int a,int b){
    int mul=0,min,i;
    min=(a<b)?a:b;
    b=(min<b)?b:a;
    for (i=0;i<min;i++){
        mul+=b;
    }
    return mul;
}

int moltiplica_rec(int a, int b){
    if (a==1)
        return b;
    else
        return b+moltiplica_rec(a-1,b);

}
