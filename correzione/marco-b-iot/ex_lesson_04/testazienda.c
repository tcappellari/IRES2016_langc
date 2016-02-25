#include "person.h"
#include "azienda.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	Person m,m1,m2;
	char c[10]="";

	Person_setName(&m, "Marione"); // m.setName("Mario"); in OO
	Person_setSurname(&m, "Rossignol");
	m.age = 44;

    Person_setName(&m1, "Mario"); // m.setName("Mario"); in OO
	Person_setSurname(&m1, "Rossi");
	m1.age = 43;


    Person_setName(&m2, "Marzio"); // m.setName("Mario"); in OO
	Person_setSurname(&m2, "Russi");
	m2.age = 45;

	Azienda az;
	az.nDipendenti=0;
	Azienda_setPiva(&az, "34234234");
	Azienda_setRagioneSociale(&az,"ragione sociale");

	Azienda_addPerson(&az,m);
    Azienda_addPerson(&az,m1);
	Azienda_addPerson(&az,m2);

	//Azienda_stampaBigliettiTimbro(&az);

    printf("\nCancelliamo qualcuno:\n");
	Azienda_delPerson(&az,m);

	char ret[100];
    Azienda_getBigliettiTimbro(&az,ret,100);

    printf("/n%s/n",ret);


	return EXIT_SUCCESS;
}
