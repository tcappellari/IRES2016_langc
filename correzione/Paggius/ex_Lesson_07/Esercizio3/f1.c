#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f1.h"

double f1(int* a, int dim) {
	double somma = 0;
	int i = 0;
	for (; i<dim;++i) {
		somma += a[i]*a[i];
	}
	return sqrt(somma);
}
