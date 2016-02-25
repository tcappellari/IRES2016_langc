#include <stdio.h>
#include <stdlib.h>

int main(){

   int myarrey[] = {2,4,6,-2,1};

   int i = 0;
   int x = myarrey[0];
   while (x > 0){
        printf('i=%d, x=%d/n', i, x);
        i++;
        x = myarrey[i];
}
return EXIT_SUCCESS;
}
