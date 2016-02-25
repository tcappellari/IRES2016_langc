#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
typedef struct {
	char name[25];
	char surname[25];
	int age;
} Person;


void Person_setName(Person* this, char* name) ;

void Person_setSurname(Person* this, char* surname) ;
// restituisce il nome e cognome
void Person_getBigliettoDaVisita(Person* this, char* bv,int l_bv) ;


#endif // PERSON_H_INCLUDED
