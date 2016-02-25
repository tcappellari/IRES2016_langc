#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Azienda.h"
#include "Person.h"

int main() {
	Azienda google;
	Azienda_init(&google);
	char timbro[100]="", bv[50]="", tutti[250]="";
	Person marco, enrico;
	Person_setName(&marco, "Marco");
	Person_setSurname(&marco, "Monopoli");
	Person_setName(&enrico, "Enrico");
	Person_setSurname(&enrico, "Qulot");
	Azienda_addDip(&google, &marco);
	Azienda_addDip(&google, &enrico);
	printf("Dipendenti inseriti: %d\n\n", google.contDip);
	Azienda_setPiva(&google, "IT1234567890");
	Azienda_setRS(&google, "Google Inc.");
	Azienda_getBV(&google, tutti);
	strcat(tutti, "\n");
	printf("%s\n", tutti);
	return EXIT_SUCCESS;
}
