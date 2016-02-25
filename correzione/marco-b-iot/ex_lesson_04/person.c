#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "person.h"


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
void Person_getBigliettoDaVisita(Person* this, char* bv, int l_bv) {
	strncpy(bv, this->name,l_bv);
	strncat(bv, " ",l_bv);
	strncat(bv, this->surname,l_bv);
	bv[l_bv-1]='\0';
}

//typedef float Temperature;

