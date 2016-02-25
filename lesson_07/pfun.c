
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

int sum(int a, int b) {
	return a + b;
}

int molt(int a, int b) {
	return a * b;
}

int exeoperation(int x, int y, int (*op)(int, int)) {
	return op(x, y);
}

int main() {

	// dichiaro la variabile operazione 
	// come puntatore a funzione di una funzione che accetta
	// due interi in input e restitusice un intero.
	
	int a = 10;
	int* pa;

	int (*operazione)(int x, int y); 

	// pa punta a un intero contenente il valore di a
	pa = &a;

	//operazione punta a una funzione contenete il codice di sum
	operazione = molt; //

	// 
	int res = operazione(2, 3);
	printf("res = %d\n", res);

	int resexe = exeoperation(4, 7, sum);
	printf("resexe = %d\n", resexe);

	// uso di typedef per rendere la dichiarazione di un
	// puntatore a funzione più leggibile.
	typedef int (*pfunop)(int, int);
	pfunop op = molt; // op equivale a operazione (variabile puntatore a funzione)
	int x = op(12, 6);



	return EXIT_SUCCESS;

}