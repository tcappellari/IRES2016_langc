#include <stdio.h>
#include <stdlib.h>
void swap(int* a,int* b){
    int temp;
    temp=(*a);
    *a=*b;
    *b=temp;
}
int main(){
    int a=5;
    int* pa;
    pa=&a;
    printf("L'indirizzo di memoria di a è %p: \n",pa );
    printf("a = %d \n",a);

    int x=5;
    int y=7;
    printf("x == %d\n",x);
    printf("y == %d\n",y);
    swap(&x,&y);

    printf("x == %d\n",x);
    printf("y == %d\n",y);

}
