#include<stdio.h>
void stampa(int *array,int len){
    int i;
    for (i=0;i<len;i++){
        printf("%d ",*(array+i));
    }
}
