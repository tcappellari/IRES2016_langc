
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

#include "mut.h" // definisce la funzione mult
#include "input.h"
//#define FIRSTVAL 5
//#define SECONDVAL 3

// calcola a^b
int mypow(int a, int b) {

	// b + b + .. + b for a times
	int molt = 1;
	for(int i = 0; i < b; ++i) {
		// non usare l'operatore *
		//molt *= a; => molt = molt * a con operatore infisso
		// con operatore prefisso => molt = *(molt, a)
		// noi abbiamo chiamato l'operatore infisso * come mult
		molt = mult(molt, a);// richiama la funzione da mut.h

	}
	return molt;
}


int main() //elevamento a potenza (FIRSTVAL)e3
{
	int result = mypow(Primo, Secondo);
	printf("%d \n", result);
	return EXIT_SUCCESS;
}

