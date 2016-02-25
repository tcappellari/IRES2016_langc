
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "azienda.h"




void Azienda_setPiva(Azienda* this, char* piva) {
	int length = sizeof(this->piva)/sizeof(char);
	strncpy(this->piva, piva, length);
	this->piva[length - 1] = '\0';
}

void Azienda_setRagionesociale(Azienda* this, char* ragsoc) {
	int length = sizeof(this->ragionesociale)/sizeof(char);
	strncpy(this->ragionesociale, ragsoc, length);
	this->ragionesociale[length - 1] = '\0';
}

// restituisce il nome e cognome
void Azienda_getTimbro(Azienda* this, char* timbro) {
	strcpy(timbro, this->piva);
	strcat(timbro, " ");
	strcat(timbro, this->ragionesociale);
}

void Azienda_addDipendente(Azienda* this, Person* dipendente) {
	this->dipendenti[this->contatoredipendenti] = *dipendente;
	this->contatoredipendenti++;
}

void Azienda_stampaDipendenti(Azienda* this) {
	for(int i = 0; i < this->contatoredipendenti; ++i) {

		char buf[50];
		Person_getBigliettoDaVisita(&(this->dipendenti[i]), buf);

		printf("Dipendente %d %s\n", i, buf);
	}
}

void Azienda_getInfoAzienda(Azienda* this, char* info) {

	info[0] = '\0';
	for(int i = 0; i < this->contatoredipendenti; ++i) {
		char buf[50];
		Person_getBigliettoDaVisita(&(this->dipendenti[i]), buf);
		strcat(info, buf);
		strcat(info, "\n");
	}
	char timbro[50];
	Azienda_getTimbro(this, timbro);
	strcat(info, timbro);
	strcat(info, "\n");
}

void Azienda_init(Azienda* this) {
	this->contatoredipendenti = 0;
}
