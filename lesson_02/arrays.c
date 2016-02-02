#include <stdio.h>

// funzioni

void main() {

	// una volta dichiarati non si 
	// possono più modificare le dimensioni
	int a[3]; // 3 rappresenta la lunghezza dell'array

	// assegno valore:
	a[0] = 10;
	a[1] = 5;
	a[2] = a[0] + a[1];


	// b ha tre elementi 12, 3, 15
	int b[] = {12, 3, a[2]};

	printf("for loop\n");
	int i;
	for(i = 0; i < 10; i++) {
		printf("\ta vale: %d\n", a[i]);
	}

	printf("while loop\n");
	int j = 0;
	while(j < 10) {
		printf("\ta vale: %d\n", a[j]);	
		j++;
	}
	
}