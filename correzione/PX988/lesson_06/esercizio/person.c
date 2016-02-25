#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "person.h"

void Person_setName(Person* this, char* name) {
	int length = sizeof(this->name)/sizeof(char);
	strncpy(this->name, name, length);
	this->name[length - 1] = '\0';
}

void Person_setSurname(Person* this, char* surname) {
	int length = sizeof(this->surname)/sizeof(char);
	strncpy(this->surname, surname, length);
	this->surname[length - 1] = '\0';
}

// restituisce il nome e cognome
void Person_getBigliettoDaVisita(Person* this, char* bv) {
	strcpy(bv, this->name);
	strcat(bv, " ");
	strcat(bv, this->surname);
}

/*
int main() {
	Person m;
	Person_setName(&m, "Marione"); // m.setName("Mario"); in OO
	Person_setSurname(&m, "Rossignol");
	m.age = -1;

	char bigliettoDaVisita[100];
	Person_getBigliettoDaVisita(&m, bigliettoDaVisita);

	printf("Ciao %s\n", bigliettoDaVisita);


//	Temperature x = 5;
//	printf("Ciao %d\n", x);

	return EXIT_SUCCESS;
}
*/
