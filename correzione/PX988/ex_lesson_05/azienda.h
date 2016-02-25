#ifndef AZIENDA_H
#define AZIENDA_H


#include "person.h"


typedef struct {
	char piva[20];
	char ragioneSociale[20];
	Person dipendenti[3];
} Azienda;


void Azienda_setPIVA(Azienda* this, char* piva);
void Azienda_setRagioneSociale(Azienda* this, char* ragioneSociale);
void Azienda_getTimbro(Azienda* this, char* timbro);
void Azienda_printBigliettiDaVisita(Azienda* this);
void Azienda_getInfo(Azienda* this, char* bvs[], char* timbro);


#endif
