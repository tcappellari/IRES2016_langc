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

int main()
{
	int numel = 10;
	int a[numel];
	int cubo[numel];

	for (int i = 0; i < numel; ++i)
	{
		a[i] = (i + 1) * 3;
	}

	mycubo(a, cubo, sizeof(a)/sizeof(int));

	for (int i = 0; i < numel; ++i)
	{
		printf("a[%d] = %d  -  cubo = %d\n", i, a[i], cubo[i]);
	}
	
	return EXIT_SUCCESS;
}