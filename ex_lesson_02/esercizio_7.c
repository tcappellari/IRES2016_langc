
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS


// tipo_ritorno nome_funzione(argomenti..)
// y = f(x);
// dichiarazione della funzione
int mult(int a, int b) { // body ==> definizione

	// b + b + .. + b for a times
	int sum = 0;
	for(int i = 0; i < a; ++i) {
		sum += b;
	}
	return sum;
}

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

	int result = mypow(5, 3);

	printf("%d \n", result);



	return EXIT_SUCCESS;
}

