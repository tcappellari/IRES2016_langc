#include <math.h>


double f1(int* numbers, int len)
{
    int sum = 0;
    for (int i = 0; i < len; ++i)
        sum += pow(numbers[i], 2);
    
    return sqrt((double) sum);
}
