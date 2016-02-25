#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double radquad(int a[], int lung)
{
	double result = 0;
	for (int i = 0; i < lung; ++i)
	{
		result = result + (a[i] * a[i]);
	}
	return result = sqrt(result);
}
