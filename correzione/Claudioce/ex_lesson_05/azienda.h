#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

typedef struct {
	char ragsoc[18];
	char piva[12];
}azienda;

void azienda_setragsoc(azienda* questa, char* ragsoc);

void azienda_setpiva(azienda* questa, char* piva);

void azienda_prenditimbro(azienda* questa, char* biglietto);