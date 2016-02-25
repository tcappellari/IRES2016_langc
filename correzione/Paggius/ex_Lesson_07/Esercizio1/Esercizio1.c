#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double radq(int* a, int dim) {
	double somma = 0;
	int i = 0;
	for (; i<dim;++i) {
		somma += a[i]*a[i];
	}
	return sqrt(somma);
}

int main()
{
	int a[] = {6,12,18,24,30,36,42,48,54,60};
	double res;
	res = radq(a, sizeof(a)/sizeof(int));
	printf("Risultato ottenuto: %.4f", res);
	return EXIT_SUCCESS;
}

