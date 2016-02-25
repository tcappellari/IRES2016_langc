#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TC: era richiesto: sqrt(x1^2+x2^2+...+xn^2)
void sqrtsum(int* a, int size){
  int i = 0;
  int sum = 0;

  for(; i < size; ++i){
    int pot = a[i] * a[i];
    sum = sum + pot;
    double value = sqrt(sum);
    printf("%f\n", value);
  }
}

int main(){

  int a[10];
  int size = sizeof(a) / sizeof(int);

  int i = 0;
  for(; i < size; ++i){
    a[i] = 6 * (i + 1);
  }

  sqrtsum(a, size);

  return EXIT_SUCCESS;
}