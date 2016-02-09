
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

void myswap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void myswapFunzionante(int* px, int* py) {
	int tmp = *px; //deferenzio => leggo valore di px
	*px = *py;
	*py = tmp;
}

int main() {

	int a;
	a = 5;

	// pa contiene l'indirizzo di memoria di a
	int* pa;
	pa = &a;

	printf("l'indirizzo di memoria di a è %p\n", pa);

	// posso leggere il valore di a direttamente:
	printf("a = %d\n", a);

	// posso leggere il valore di a indirettamente, tramite pa:
	printf("a = %d\n", *pa);	


	/** swap **/
	int x = 5;
	int y = 7;

	printf("PRIMA \n");
	printf("x == %d\n", x);
	printf("y == %d\n", y);

	// voglio che x sia 7 e y sia 5
	int tmp = x;
	x = y;
	y = tmp;

	printf("DOPO \n");
	printf("x == %d\n", x);
	printf("y == %d\n", y);

	// voglio fare lo swap usando una funzione.
	myswap(x, y);

	printf("DOPO DOPO\n");
	printf("x == %d\n", x);
	printf("y == %d\n", y);



	myswapFunzionante(&x, &y);

	printf("DOPO DOPO DOPO (funzionante)\n");
	printf("x == %d\n", x);
	printf("y == %d\n", y);

	return EXIT_SUCCESS;
}

