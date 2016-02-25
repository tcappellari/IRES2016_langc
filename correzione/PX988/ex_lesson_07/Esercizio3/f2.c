#include <math.h>


void f2(int* src, int* des, int len)
{
    for (int i = 0; i < len; ++i)
        des[i] = pow(src[i], 3);
} 
