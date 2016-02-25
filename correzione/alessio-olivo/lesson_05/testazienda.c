/*
partendo dal file Person.c rimuovere il main e creare un file person.h
che contiene la definizione di typedef struct {...} Person
le funzioni Person_setName, Person_setSurname e Person_getBigliettoDaVisita

creo file azienda.h e azienda.c
Creo struttura dati azienda che contiene:
* piva
* ragione sociale

e ha funzioni:
- setPIVA
- setRagioneSociale
- getTimbro, quest'ultima "restituisce" la dicitura:
	RagioneSociale inserita
	PIVA: pivainserita

creo file testazienda.c che contiene main e:
- creo azieda, imposto piva e ragione sociale, stampo a console il timbro.

II)
Modificare la struttura dati Azienda, inserendo i Dipendenti.
Un dipendente non è altro che un array di Persone!!!
SIII!
Inserire funzione "su azienda" che stampa tutti i Biglietti da visita dei dipendenti.
Inserire funzione "su azienda" che restituisce i Biglietti da visita dei dipendenti e il suo Timbro.
*/

#include<stdio.h>
#include<stdlib.h>
#include"azienda.h"

int main() {
    Azienda IRES;
    Azienda_setPartitaIva(&IRES, "01234568987");
    Azienda_setRagioneSociale(&IRES, "S.R.L.");
    Azienda_setNome(&IRES, "IRES");

    int numero_dipendenti;
    printf("Quanti dipendenti hai?");
    scanf("%d", &numero_dipendenti);

    char nome[20];
    char cognome[20];
    for(int j = 1; j <= numero_dipendenti; j++) {
        printf("Come si chiama il dipendente n°%d: ", j);
        scanf("%s", &nome);
        printf("Il Cognome è: ");
        scanf("%s", &cognome);
        Azienda_setDipendenti(&IRES, nome, cognome, j - 1);
    }

    printf("L'azienda %s %s, con partita iva %s ", IRES.nome_azienda, IRES.ragione_sociale, IRES.partita_iva);
    printf("ha come dipendente/i: \n");
    for(int i = 0; i < numero_dipendenti; i++) {
        printf("%s %s\n", IRES.dipendenti[i].name, IRES.dipendenti[i].surname);
    }

    return EXIT_SUCCESS;
}
