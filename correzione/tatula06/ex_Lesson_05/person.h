#ifndef PERSON_H
#define PERSON_H

typedef struct {
	char name[20];
	char surname[20];

} Person;

void Person_setName(Person* this, char* name);
void Person_setSurname(Person* this, char* surname);
void Person_getBigliettoDaVisita(Person* this, char* bv);

#endif // PERSON_H
