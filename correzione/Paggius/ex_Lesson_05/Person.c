#include "Person.h"
#include <string.h>

void Person_setName(Person* this, char* nome) {
	int lun = sizeof(this->name)/sizeof(char);
	strncpy (this->name, nome, (lun-1));
	strcat (this->name, "\0");
}

void Person_setSurname(Person* this, char* cognome) {
	int lun = sizeof(this->surname)/sizeof(char);
	strncpy (this->surname, cognome, (lun-1));
	strcat (this->surname, "\0");
}

void Person_setAge(Person* this, int eta) {
	this->age = eta;
}

void Person_getBigliettoDaVisita(Person* this, char* bv) {
	strcat(bv, this->name);
	strcat(bv, " ");
	strcat(bv, this->surname);
}
