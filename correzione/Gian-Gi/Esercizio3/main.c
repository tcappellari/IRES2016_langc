#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f1.h"
#include "f2.h"

int main()
{

	// Esercizio 1
	int numel = 10;
	int a[numel];
	for (int i = 0; i < numel; ++i)
	{
		a[i] = (i + 1) * 6;
	}
	double result = radquad(a, sizeof(a)/sizeof(int));
	printf("Il risultato dell'esercizio 1 è: %f\n", result);

	// Esercizio 2
	int nrel = 10;
	int b[nrel];
	int cubo[nrel];

	for (int i = 0; i < nrel; ++i)
	{
		b[i] = (i + 1) * 3;
	}

	mycubo(b, cubo, sizeof(b)/sizeof(int));

	printf("Il risultato dell'esercizio 2 è:\n");
	for (int i = 0; i < nrel; ++i)
	{
		printf("b[%d] = %d  -  cubo = %d\n", i, b[i], cubo[i]);
	}
	
	return EXIT_SUCCESS;
}