#include<string.h>
#include"azienda.h"
#include"person.h"

void Azienda_setNome(Azienda* this, char* nome_azienda) {
    strcpy(this->nome_azienda, nome_azienda);
}


void Azienda_setPartitaIva(Azienda* this, char* partita_iva) {
    strcpy(this->partita_iva, partita_iva);
}


void Azienda_setRagioneSociale(Azienda* this, char* ragione_sociale) {
    strcpy(this->ragione_sociale, ragione_sociale);
}


void Azienda_getTimbro(Azienda* this, char* timbro) {
    strcpy(timbro, this->ragione_sociale);
    strcpy(timbro, " ");
    strcpy(timbro, this->partita_iva);
}


void Azienda_setDipendenti(Azienda* this, char* name, char* surname, int posizione) {
    Person dipendente;
    Person_setName(&dipendente, name);
    Person_setSurname(&dipendente, surname);

    this->dipendenti[posizione] = dipendente;
}
