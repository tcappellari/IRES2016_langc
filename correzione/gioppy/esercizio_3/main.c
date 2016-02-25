#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f1.h"
#include "f2.h"

int main(){
  int a[10], b[10];
  int size_a = sizeof(a) / sizeof(int);
  int size_b = sizeof(b) / sizeof(int);

  int i = 0;
  for(; i < size_a; ++i){
    a[i] = 6 * (i + 1);
  }

  int j = 0;
  for (; j < size_b; ++j){
    b[j] = 3 * (j + 1);
  }

  sqrtsum(a, size_a);

  int result[size_b];
  cube(b, result, size_b);

  int k = 0;
  for(; k < sizeof(result) / sizeof(int); ++k){
    printf("%d\n", result[k]);
  }

  return EXIT_SUCCESS;
}