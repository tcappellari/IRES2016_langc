
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

#include "mut.h" // definisce la funzione mult

#define FIRSTVAL 5

// calcola a^b
int mypow(int a, int b) {

	// b + b + .. + b for a times
	int molt = 1;
	for(int i = 0; i < b; ++i) {
		// non usare l'operatore *
		//molt *= a; => molt = molt * a con operatore infisso
		// con operatore prefisso => molt = *(molt, a)
		// noi abbiamo chiamato l'operatore infisso * come mult
		molt = mult(molt, a);

	}
	return molt;
}


int main() {
	int result = mypow(FIRSTVAL, 3);
	printf("%d \n", result);
	return EXIT_SUCCESS;
}

