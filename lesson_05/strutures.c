#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

 // tipo dato "globale"
struct myStructure {
	int i;
	char c;
	char str[10];
} myS1; // myS1 è variabile globale

void f(int i, char c, char* str) {
	// TODO: uso le variabile
}

void fs(struct myStructure myS) {
	// TODO: uso le variabile
}

int main() {

	struct myStructure myS2; // myS2 è variabile locale

	myS2.i = 10;
	myS2.c = 'a';
	//myS2.str = "Pippo"; // AAAHH!!! BUG (classic)
	strcpy(myS2.str, "Pippo");


	char mychar = 'f'; // char
	char* mystr = "fortuna"; // array of chars => pointer of first char
	char mystrchr = *mystr;
	printf("equals = %d\n", mystrchr == mychar);


	printf("i = %d\n", myS2.i);
	printf("c = %c\n", myS2.c);
	printf("str = %s\n", myS2.str);

	struct myStructure myS3; // myS3 è variabile locale
	myS3 = myS2; // assegnamento tra strutture.

	myS2.i++;
	myS2.str[0] = 'F';

	printf("i = %d\n", myS3.i);
	printf("c = %c\n", myS3.c);
	printf("str = %s\n", myS3.str);

	return EXIT_SUCCESS;
}

