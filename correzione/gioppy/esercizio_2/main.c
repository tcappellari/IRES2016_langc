#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cube(int* a, int output[], int size){
  int i = 0;

  for(; i < size; ++i){
    output[i] = a[i] * a[i] * a[i];
  }
}

int main(){

  int a[10];
  int size = sizeof(a) / sizeof(int);

  int i = 0;
  for(; i < size; ++i){
    a[i] = 3 * (i + 1);
  }

  int result[size];
  cube(a, result, size);

  int j = 0;
  for(; j < sizeof(result) / sizeof(int); ++j){
    printf("%d\n", result[j]);
  }

  return EXIT_SUCCESS;
}