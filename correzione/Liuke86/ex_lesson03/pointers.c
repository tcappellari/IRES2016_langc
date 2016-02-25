#include <stdio.h>
#include <stdlib.h>

void myswap(int* px, int* py){
    
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(){

    int x = 5;
    int y = 7;
    
    myswap(&x, &y);

printf("%d\n", x);
printf("%d\n", y);
    
    return EXIT_SUCCESS;
}