#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mycubo(int a[], int* b, int lung)
{
	for (int i = 0; i < lung; ++i)
	{
		b[i] = a[i] * a[i] * a[i];
	}
}
