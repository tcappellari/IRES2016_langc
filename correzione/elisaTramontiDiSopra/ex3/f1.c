#include "f1.h"


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