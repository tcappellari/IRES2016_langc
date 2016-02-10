
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

int main() {

	// input
	int n = 50;

	int sum = 0;
	int numeridisparitrovati = 0;
	int item = 0;

	while(numeridisparitrovati < n) {
		//printf("item = %d\n", item);
		//printf("numeridisparitrovati = %d\n", numeridisparitrovati);
		//printf("sum = %d\n", sum);

		if (item % 2 != 0) {
			sum += item;
			numeridisparitrovati++;
		}
		item++;
	} 

	printf("Totale con %d elementi = %d\n", n, sum);


	return EXIT_SUCCESS;
}

