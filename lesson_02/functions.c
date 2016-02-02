#include <stdio.h>

// funzioni

int somma(int a, int b) {
	// l'ambiente della funzione somma
	int c = a + b;
	return c;
}

void main() {

	int v1 = 5;
	int v2 = 4;

	int x = somma(v1, v2);

	printf("La somma di %d + %d = %d\n", v1, v2, x);
	
}