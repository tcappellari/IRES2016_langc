
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

int main() {

	int myarray[] = {2, 4, 6, -2, 1};

	// inizializzo l'indice
	int i = 0;
	// inizializzo primo elemento.
	int item = myarray[i];

	// variabile che contiene la somma
	int sum = 0;

	// loop fino a quando x è positivo e l'indice è all'interno dell'array.
	while (item > 0 && i < sizeof(myarray)/sizeof(int)) {
		printf("i=%d, x=%d\n", i, item);

		sum += item;
		 // leggo valore sucessivo
		i++;
		item = myarray[i];
	}

	printf("Somma = %d\n", sum);

	return EXIT_SUCCESS;
}

