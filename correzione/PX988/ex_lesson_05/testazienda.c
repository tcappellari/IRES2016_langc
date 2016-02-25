#include <stdio.h>
#include <stdlib.h>


#include "azienda.h"


int main()
{
	Azienda azienda;
	Azienda_setPIVA(&azienda, "IT452309RT09");
	Azienda_setRagioneSociale(&azienda, "XTECH");
	char timbro[50];
	Azienda_getTimbro(&azienda, timbro);
	printf("%s\n", timbro);
	Person_setName(azienda.dipendenti, "Paride");
	Person_setSurname(azienda.dipendenti, "Squecco");
	Person_setName(azienda.dipendenti + 1, "Tiziano");
	Person_setSurname(azienda.dipendenti + 1, "Cappellari");
	Person_setName(azienda.dipendenti + 2, "Claudio");
	Person_setSurname(azienda.dipendenti + 2, "Fava");
	Azienda_printBigliettiDaVisita(&azienda);
	/*
	char bvs[3][50];
	Azienda_getInfo(&azienda, bvs, timbro);
	for (int i = 0; i < sizeof(bvs)/sizeof(char); ++i)
		printf("%s\n", bvs[i]);
	printf("%s\n", timbro);
	*/
	return EXIT_SUCCESS;
}
