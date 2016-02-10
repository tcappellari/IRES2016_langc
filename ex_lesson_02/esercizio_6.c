
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

int main() {

	int result = mult(5, 3);

	printf("%d \n", result);



	return EXIT_SUCCESS;
}

