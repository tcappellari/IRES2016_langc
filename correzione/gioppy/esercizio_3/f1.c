#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f1.h"

void sqrtsum(int* a, int size){
  int i = 0;
  int out = 0;

  for(; i < size; ++i){
    out = out + (a[i] * a[i]);
    double value = sqrt(out);
    printf("%f\n", value);
  }
}