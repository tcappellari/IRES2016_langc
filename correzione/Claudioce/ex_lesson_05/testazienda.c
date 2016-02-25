#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "azienda.c"
 

int main(){
	dipendente p[3];
	azienda  m;
	p[0] ="alfredo bianchi";
	p[1]="bruno rossi";
	p[2]="giorgio verdi";
	azienda_setragsoc(&m, "Mario e Mario snc"); 
	azienda_setpiva(&m, "00823175254");
	azienda_setdip (&p, p[0], 0);
	azienda_setdip (&p, p[1], 1);
	azienda_setdip (&p, p[2], 2);
	char timbro[100];
	char timbro2[100];
	azienda_prenditimbro(&m, timbro);
	azienda_personatimbro(&p, timbro2);
	printf("Ragione sociale : %s Dipendente : %s\n", timbro ,timbro2);
	return EXIT_SUCCESS ;
}
