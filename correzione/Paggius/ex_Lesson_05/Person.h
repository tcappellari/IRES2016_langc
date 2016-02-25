#ifndef Person_h
#define Person_h

typedef struct {
	char name[50];
	char surname[50];
	int age;
} Person;

void Person_setName(Person* this, char* nome);
void Person_setSurname(Person* this, char* cognome);
void Person_setAge(Person* this, int eta);
void Person_getBigliettoDaVisita(Person* this, char* bv);

#endif
