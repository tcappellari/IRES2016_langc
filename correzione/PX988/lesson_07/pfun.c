#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int sum(int a, int b)
{
	return a + b;
}


int molt(int a, int b)
{
	return a * b;
}

int exeoperation(int x, int y, int (*op)(int, int))
{
	return op(x, y);
}

int main()
{	
	// la variabile operazione viene dichiarata come un
	// puntatore a una funzione che accetta due interi
	// come argomenti e restituisce un intero
	int (*operazione)(int x, int y);

	// operazione punta alla funzione sum
	operazione = molt;

	int res = operazione(2, 3);
	printf("res = %d\n", res);

	int resexe = exeoperation(2, 3, sum);
	printf("resexe = %d\n", resexe);

	typedef int (*pfunop)(int, int);
	pfunop op = molt;
	int x = op(3, 2);
	printf("x = %d\n", x);

	return EXIT_SUCCESS;
}
