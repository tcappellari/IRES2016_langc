#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

typedef struct {
	char piva[11];
	char ragionesociale[10];
} DatiAzienda;

void DatiAzienda_setPIVA(DatiAzienda* this, char* piva) {
	int length = sizeof(this->piva)/sizeof(char);
	strncpy(this->piva, piva, length);
	this->piva[length - 1] = '\0';
}

void DatiAzienda_setRagioneSociale(DatiAzienda* this, char* ragionesociale) {
	int length = sizeof(this->ragionesociale)/sizeof(char);
	strncpy(this->ragionesociale, ragionesociale, length);
	this->ragionesociale[length - 1] = '\0';
}

void DatiAzienda_getTimbro(DatiAzienda* this, char* timbro) {
	strcpy(timbro, this->ragionesociale);
	strcat(timbro, "\nP.IVA ");
	strcat(timbro, this->piva);
}
