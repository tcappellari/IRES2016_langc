#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

typedef struct {
	char ragsociale[18];
	char piva[12];
	
}ditta;

void ditta_setragsociale(ditta* questa, char* ragsociale) {
	int lunghezza = sizeof(questa->ragsociale)/sizeof(char);
	strncpy(questa->ragsociale, ragsociale, lunghezza);
	questa->ragsociale[lunghezza - 1] = '\0';
}

void ditta_setpiva(ditta* questa, char* piva) {
	int lunghezza = sizeof(questa->piva)/sizeof(char);
	//void* viva= piva;
	//char* niva;
	//niva=  (char*)viva;
	strncpy(questa->piva, piva, lunghezza);
	questa->piva[lunghezza - 1] = '\0';
}
void ditta_prendiBigliettoDaVisita(ditta* questa, char* biglietto) {
	strcpy(biglietto, questa->ragsociale);
	strcat(biglietto, " P.Iva : ");
	strcat(biglietto, questa->piva);
}