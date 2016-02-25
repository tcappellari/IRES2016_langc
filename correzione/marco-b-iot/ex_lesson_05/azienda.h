#include "person.h"
#ifndef AZIENDA_H_INCLUDED
#define AZIENDA_H_INCLUDED
typedef struct{
    int nDipendenti;
    char piva[25];
    char ragioneSociale[25];
    Person dipendenti[100];
} Azienda;

void Azienda_stampaBigliettiDip(Azienda *a);
void Azienda_stampaBigliettiTimbro(Azienda *a);
void Azienda_setPiva(Azienda *a, char *piva);
void Azienda_setRagioneSociale(Azienda *a, char *ragionesociale);
void Azienda_getTimbro(Azienda *a, char *timbro);

int Azienda_addPerson(Azienda *a, Person p);
int Azienda_searchPerson(Azienda *a, Person p);
int Azienda_delIPerson(Azienda *a, int dip);
int Azienda_delPerson(Azienda *a, Person p);


#endif // AZIENDA_H_INCLUDED
