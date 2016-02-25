#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

/*
TODO: per casa modificare l'esercizio azienda, persona usando lo heap.
*/

typedef struct {
	char* name;
	char* surname;
	int age;

} Person;

void Person_setName(Person* this, char* name) {
	int length = strlen(name);
	this->name = malloc(length + 1);
	strcpy(this->name, name);
}

void Person_setSurname(Person* this, char* surname) {
	// TODO a casa. modificare come name
	int length = sizeof(this->surname)/sizeof(char);
	strncpy(this->surname, surname, length);
	this->surname[length - 1] = '\0';
}

// restituisce il nome e cognome
void Person_getBigliettoDaVisita(Person* this, char* bv) {
	strcpy(bv, this->name);
	strcat(bv, " ");
	//strcat(bv, this->surname);
}

int main() {

	int size = 1000000000; 
	//Person ap[size];

	Person* people = malloc(size * sizeof(Person));

	people++;

	Person m;
	Person_setName(&m, "Marione");
	//TODO a casa. Person_setSurname(&m, "Rossignol");
	m.age = -1;

	char bigliettoDaVisita[100];
	Person_getBigliettoDaVisita(&m, bigliettoDaVisita);

	printf("Ciao %s\n", bigliettoDaVisita);

	return EXIT_SUCCESS;
}

