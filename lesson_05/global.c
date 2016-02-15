#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS

//#include "global.h" non srettamente necessario in questo file.

int x = 5; // variabili globali

void inc5() { // side effect
	//x += 5;
	x = x + 5;
}

int inc5Local(int y) { // non ha side effect
	int cinque = 5; // locale
	return y + cinque;
}

int inc5Static() {
	static int si = 20; // eseguita solo la prima volta, poi zona memoria 'conservata'
	si++;
	return si;
}

int main() {

	printf("x = %d\n", x);
	x = 15;
	printf("x = %d\n", x);
	inc5();
	printf("x = %d\n", x);

	x = inc5Local(x);
	printf("x = %d\n", x);

	printf("static local var %d\n", inc5Static());
	printf("static local var %d\n", inc5Static());
	printf("static local var %d\n", inc5Static());
	printf("static local var %d\n", inc5Static());

	printf("global %d\n", x);
	changeX();
	printf("global %d\n", x);

	return EXIT_SUCCESS;
}

