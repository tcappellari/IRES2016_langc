#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "person.h"
#include "azienda.h"



int main() {
	Person m;
	Person_setName(&m, "Marione"); // m.setName("Mario"); in OO
	Person_setSurname(&m, "Rossignol");
	m.age = -1;

	Person m2;
	Person_setName(&m2, "Marione2"); // m.setName("Mario"); in OO
	Person_setSurname(&m2, "Rossignol2");


	char bigliettoDaVisita[100];
	Person_getBigliettoDaVisita(&m, bigliettoDaVisita);

	printf("Persona %s\n", bigliettoDaVisita);

	Azienda a;
	Azienda_init(&a); // inizializzo la struttura

	Azienda_setPiva(&a, "ACME"); // m.setName("Mario"); in OO
	Azienda_setRagionesociale(&a, "Acem system");

	char timbro[100];
	Azienda_getTimbro(&a, timbro);

	Azienda_addDipendente(&a, &m);
	Azienda_addDipendente(&a, &m2);

	printf("Azienda %s\n", timbro);

	// stampiamo i dipendenti dell'azienda
	Azienda_stampaDipendenti(&a);

	char fullinfo[200];
	Azienda_getInfoAzienda(&a, fullinfo);
	printf("Azienda Full Info \n%s\n", fullinfo);


	return EXIT_SUCCESS;
}

