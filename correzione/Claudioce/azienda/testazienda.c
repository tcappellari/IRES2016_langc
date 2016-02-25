#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "persone.c"
#include "azienda.c"
#include "persone.h"
#include "azienda.h"




int main()
{
dati det;
dati det1;
datiaz detaz;
int  dimensione = 1000000; 
char dettaglio[100]; 
char datiazienda[100];
char tutteleinfo[200];

dati* gente = malloc(dimensione * sizeof(dati));
gente++;

dainome(&det,"Claudio"); 
daicognome(&det,"Ceschia");

dainome(&det1,"Gianni");
daicognome(&det1,"Rivera");

inizializzadipaz(&detaz);

dairag(&detaz,"Buse dai Veris"); 
daipiva(&detaz,"008329040151");

rendidati(&det,dettaglio);

printf("Ciao %s\n",dettaglio);  

getimbro(&detaz,datiazienda);

inserdipazienda(&detaz,&det);
inserdipazienda(&detaz,&det1);

stampadipazienda(&detaz);

infoaziendali(&detaz,tutteleinfo);

printf("Ragione Sociale: %s\n",datiazienda);
printf("Tutte le informazioni aziendali\n%s\n",tutteleinfo );


	return EXIT_SUCCESS;
}