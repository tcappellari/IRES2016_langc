#include"person.h"
#ifndef AZIENDA_H
#define AZIENDA_H


typedef struct {
    char nome_azienda[50];
    char partita_iva[15];
    char ragione_sociale[20];
    Person dipendenti[100];
} Azienda;

void Azienda_setNome(Azienda* this, char* nome_azienda);
void Azienda_setPartitaIva(Azienda* this, char* partita_iva);
void Azienda_setRagioneSociale(Azienda* this, char* ragione_sociale);
void Azienda_getTimbro(Azienda* this, char* timbro);
void Azienda_setDipendenti(Azienda* this, char* name, char* surname, int posizione);

#endif
