#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "azienda.h"
#include "dipendente.h"
 
 void azienda_setragsoc(azienda* questa, char* ragsoc) {
	int lunghezza = sizeof(questa->ragsoc)/sizeof(char);
	strncpy(questa->ragsoc, ragsoc, lunghezza);
	questa->ragsoc[lunghezza - 1] = '\0';
}
void azienda_setpiva(azienda* questa, char* piva) {
	int lunghezza = sizeof(questa->piva)/sizeof(char);
	strncpy(questa->piva, piva, lunghezza);
	questa->piva[lunghezza - 1] = '\0';
}
void azienda_setdip(dipendente* quella, char* nomecognome) {
	int lunghezza = sizeof(quella->nomecognome)/sizeof(char);
	strncpy(quella->nomecognome, nomecognome, lunghezza);
	quella->nomecognome[lunghezza - 1] = '\0';
}

void azienda_prenditimbro(azienda* questa, char* biglietto) {
	strcpy(biglietto, questa->ragsoc);
	strcat(biglietto, "  Part.IVA  ");
	strcat(biglietto, questa->piva);
}
void azienda_personatimbro(dipendente* quella, char* biglietto2) {
	//strcpy(biglietto2 , " dipendente : ");
	strcpy(biglietto2, quella->nomecognome);
	//strcat(biglietto, questa->piva);
}