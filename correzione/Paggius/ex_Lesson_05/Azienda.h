#ifndef Azienda_h
#define Azienda_h
#include "Person.h"

typedef struct {
	char piva[15];
	char rSociale[50];
	Person dipendenti[10];
	int contDip;
} Azienda;

void Azienda_init(Azienda* this);
void Azienda_setPiva(Azienda* this, char* partitaIVA);
void Azienda_setRS(Azienda* this, char* ragSoc);
void Azienda_getTimbro(Azienda* this, char* Timbro);
void Azienda_printBV(Azienda* this);
void Azienda_addDip(Azienda* this, Person* fantozzi);
void Azienda_getBV(Azienda* this, char* tutti);

#endif
