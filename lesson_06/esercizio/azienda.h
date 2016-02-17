#ifndef AZIENDA_H
#define AZIENDA_H

#include "person.h"

typedef struct {
	char piva[11+1];
	char ragionesociale[20];
	Person dipendenti[10];

	// gestione interna
	int contatoredipendenti;
} Azienda;

void Azienda_init(Azienda* this);

void Azienda_setPiva(Azienda* this, char* piva);

void Azienda_setRagionesociale(Azienda* this, char* ragsoc);

void Azienda_getTimbro(Azienda* this, char* timbro);

void Azienda_addDipendente(Azienda* this, Person* dipendente);

void Azienda_stampaDipendenti(Azienda* this);

void Azienda_getInfoAzienda(Azienda* this, char* info);

#endif
