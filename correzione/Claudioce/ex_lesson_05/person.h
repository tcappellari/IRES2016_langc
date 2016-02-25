#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

typedef struct {
	char nome[5];
	char cognome[10];
	int eta;
}Persone;

void Persone_setnome(Persone* questa, char* nome);

void Persone_setcognome(Persone* questa, char* cognome); 

void Persone_prendiBigliettoDaVisita(Persone* questa, char* biglietto);