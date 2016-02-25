#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f1.h"
#include "f2.h"

int main()
{
	int a[] = {6,12,18,24,30,36,42,48,54,60};
	int arorig[] = {3,6,9,12,15,18,21,24,27,30};
	int arfin[10];
	int dim = sizeof(arfin)/sizeof(int);
	printf("Radice Quadrata array1: %.4f\n", f1(a, sizeof(a)/sizeof(int)));
	f2(arorig, arfin, dim);
	for (int i = 0; i < dim; ++i) {
		printf("Valore di %d al cubo: %d\n", arorig[i], arfin[i]);
	}
	return EXIT_SUCCESS;
}

