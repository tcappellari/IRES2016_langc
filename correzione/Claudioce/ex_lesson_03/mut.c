
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

// non necessario
//#include "mut.h" // include il file contenuto all'interno della directory corrente

// tipo_ritorno nome_funzione(argomenti..)
// y = f(x);
// dichiarazione della funzione
int mult(int a, int b) { // body ==> definizione

	// b + b + .. + b for a times
	int sum = 0;
	for(int i = 0; i < a; ++i) 
	{
		sum += b;
	}
	return sum;
}

// può esistere una sola funzione main
/*int main() {

	int result = mult(5, 3);
	printf("%d \n", result);
	return EXIT_SUCCESS;
}*/

