#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f2.h"

void cube(int* a, int output[], int size){
  int i = 0;

  for(; i < size; ++i){
    output[i] = a[i] * a[i] * a[i];
  }
}