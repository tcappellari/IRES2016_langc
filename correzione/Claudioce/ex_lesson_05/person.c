#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "person.h"
 
 void Persone_setnome(Persone* questa, char* nome) {
	int lunghezza = sizeof(questa->nome)/sizeof(char);
	strncpy(questa->nome, nome, lunghezza);
	questa->nome[lunghezza - 1] = '\0';
}
void Persone_setcognome(Persone* questa, char* cognome) {
	int lunghezza = sizeof(questa->cognome)/sizeof(char);
	strncpy(questa->cognome, cognome, lunghezza);
	questa->cognome[lunghezza - 1] = '\0';
}
void Persone_prendiBigliettoDaVisita(Persone* questa, char* biglietto) {
	strcpy(biglietto, questa->nome);
	strcat(biglietto, " ");
	strcat(biglietto, questa->cognome);
}
