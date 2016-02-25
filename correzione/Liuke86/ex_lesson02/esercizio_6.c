#include <stdio.h>
#include <stdlib.h>

//dichiarazione funzione
int mult(int a, int b){
//body ==> definizione
// b+b+...+b for a times
   int sum = 0;
   for(int i = 0; i < a; ++i){
      sum += b;
   }
   return sum;	
}

int main (){
   
   int result = mult(3,5);
   printf("%d \n", result);


return EXIT_SUCCESS;
}