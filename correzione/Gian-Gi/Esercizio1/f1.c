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
	// TC: inutile assegnare a variabile
	// return sqrt(result);
	return result = sqrt(result);
}

int main()
{
	int numel = 10;
	int a[numel];
	for (int i = 0; i < numel; ++i)
	{
		a[i] = (i + 1) * 6;
	}
	double result = radquad(a, sizeof(a)/sizeof(int));
	printf("Il risultato dell'esercizio è: %f\n", result);

	return EXIT_SUCCESS;
}