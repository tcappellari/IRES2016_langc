#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// TC: radice quadrata della somma dei quadrati
// la funzione dovrebbe restituire la radice quadrata.
// non void.
void sqrtsum(int* a, int size) {
	int i=0;
	int sommaQuadrati = 0;
	for(; i < size; i++){
		int quadrato = a[i]*a[i];
		int sommaQuadrati = sommaQuadrati + quadrato;
		double valore = sqrt(sommaQuadrati);
		printf("%f\n", valore);
	}
}

int main() {
	int a[10] = {6,12,18,24,30,36,42,48,54,60};
	int size = sizeof(a)/sizeof(int);
	sqrtsum(a, size);
	return EXIT_SUCCESS;
}