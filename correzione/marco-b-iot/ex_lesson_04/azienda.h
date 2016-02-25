#include <string.h>
#include <stdio.h>
#include "person.h"
#ifndef AZIENDA_H_INCLUDED
#define AZIENDA_H_INCLUDED
#define MAXDIPENDEN 100
#define LPIVA 25
#define LRAGIONESOC 25
#define LBIGLIETTI 20
#define LTIMBRO 20

typedef struct{
    int nDipendenti;
    char piva[LPIVA];
    char ragioneSociale[LRAGIONESOC];
    Person dipendenti[MAXDIPENDEN];
} Azienda;

void Azienda_Init(Azienda *a);


void Azienda_stampaBigliettiDip(Azienda *a);
void Azienda_stampaBigliettiTimbro(Azienda *a);
void Azienda_setPiva(Azienda *a, char *piva);
void Azienda_setRagioneSociale(Azienda *a, char *ragionesociale);
void Azienda_getTimbro(Azienda *a, char *timbro, int ltimbro);
void Azienda_getBigliettiTimbro(Azienda *a, char *bigliettiTimbro, int lBigliettiTimbro);

int Azienda_addPerson(Azienda *a, Person p);
int Azienda_searchPerson(Azienda *a, Person p);
int Azienda_delIPerson(Azienda *a, int dip);
int Azienda_delPerson(Azienda *a, Person p);


#endif // AZIENDA_H_INCLUDED
