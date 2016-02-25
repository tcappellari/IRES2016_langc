#include<string.h>
#include"person.h"


void Person_setName(Person* this, char* name) {
    strcpy(this->name, name);
}


void Person_setSurname(Person* this, char* surname) {
    strcpy(this->surname, surname);
}


void Person_getBigliettoDaVisita(Person* this, char* bv) {
    strcpy(bv, this->name);
    strcpy(bv, " ");
    strcpy(bv, this->surname);
}
