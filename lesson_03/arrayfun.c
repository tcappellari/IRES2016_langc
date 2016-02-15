#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

// completare questo esercizio modificando anche l'init e verificare il funzionamento.


void init(int a[]) {
	printf("sizeof a == %d\n", sizeof(a));

	for(int i = 0; i < sizeof(a)/sizeof(int); ++i) {
		a[i] = sizeof(a)/sizeof(int) - i;
	}
}

// a punta al primo elemento dell'array
void printArray(int a[20]) {
	for(int i = 0; i < sizeof(a)/sizeof(int); ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

// a punta al primo elemento dell'array
void printArrayUnbound(int a[]) {
	for(int i = 0; i < sizeof(a)/sizeof(int); ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

// a punta al primo elemento dell'array
void printArrayPointer(int* a) {
	for(int i = 0; i < sizeof(a)/sizeof(int); ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

// a punta al primo elemento dell'array
void printArrayPointerFunzionante(int* a, int size) {
	for(int i = 0; i < size; ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}


int main() {

	// crea array 20 elementi
	int myarray[20];

	init(myarray);
	printArray(myarray);

	printArrayPointerFunzionante(myarray, sizeof(myarray)/sizeof(int));


	return EXIT_SUCCESS; // 0

}