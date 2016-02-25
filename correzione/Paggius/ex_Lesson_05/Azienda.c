#include "Azienda.h"
#include <string.h>
#include <stdio.h>

void Azienda_init(Azienda* this) {
	this->contDip = 0;
}

void Azienda_setPiva(Azienda* this, char* partitaIVA) {
	int lun = sizeof(this->piva)/sizeof(char);
	strncpy (this->piva, partitaIVA, (lun-1));
	strcat (this->piva, "\0");
}

void Azienda_setRS(Azienda* this, char* ragSoc) {
	int lun = sizeof(this->rSociale)/sizeof(char);
	strncpy (this->rSociale, ragSoc, (lun-1));
	strcat (this->rSociale, "\0");
}

void Azienda_getTimbro(Azienda* this, char* Timbro) {
	strcat(Timbro, "Ragione Sociale: ");
	strcat(Timbro, this->rSociale);
	strcat(Timbro, "\n");
	strcat(Timbro, "Partita IVA: ");
	strcat(Timbro, this->piva);
}

void Azienda_printBV(Azienda* this) {
	char bv[100]="";
	//int lun = 2 ;//sizeof(this->dipendenti)/sizeof(Person);
	for (int i=0; i<this->contDip; i++) {
		Person_getBigliettoDaVisita(&this->dipendenti[i], bv);
		printf("%s\n", bv);
	}
}

void Azienda_addDip(Azienda* this, Person* fantozzi) {
	this->dipendenti[this->contDip] = *fantozzi;
	this->contDip++;
}

void Azienda_getBV(Azienda* this, char* tutti) {
	//int lun;
	for (int i=0; i < this->contDip; i++) {
		Person_getBigliettoDaVisita(&this->dipendenti[i], tutti);
		strcat(tutti, "\n");
	}
	Azienda_getTimbro(this, tutti);
}
