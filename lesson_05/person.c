#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
/*
struct Person {
	char name[20];
	char surname[20];
	int age;

};*/

typedef struct {
	char name[5];
	char surname[5];
	int age;

/* ex c++ (NON C)
	void setName(char* name) {
		//strcpy((*person).name, name);
		strcpy(this->name, name);
	}
*/
} Person;

void Person_setName(Person* this, char* name) {
	//strcpy((*this).name, name);
	//strcpy(this->name, name);
	// come evitare che strcpy copi più della zona di memoria a lui riservata?
	// uso strncpy
	int length = sizeof(this->name)/sizeof(char);
	strncpy(this->name, name, length);
	//if (strlen(name) >= length - 1)
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

//typedef float Temperature;

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

