
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

void init(int* pa, int length) {

	printf("%d\n", *pa);
	pa++; //pa = pa + 1;
	printf("%d\n", *pa);

	// l'operatore []
	printf("%d\n", pa[2]);	
	// equivale a:
	printf("%d\n", *(pa + 2));


}


int main() {


	int a[10];
	a[0] = 12;
	a[1] = 7;
	a[2] = 14;
	a[3] = 140;

	init(a, sizeof(a)/sizeof(int));

	// da float a int
	float f = 15.0;
	// puntatore al float i
	float* pf = &f;

	// trasformo in puntatore void
	void* vp = pf; //puntatore "universale"

	// trasformo il puntatore a void in puntatore a int
	int* ip = vp;

	// print float pointer
	printf("int: %d\n", *ip);

	return EXIT_SUCCESS;
}

