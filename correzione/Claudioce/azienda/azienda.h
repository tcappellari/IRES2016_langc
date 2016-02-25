#ifndef Gigi
#define Gigi
#include "persone.h"
//#include "azienda.c"
typedef struct
{
	char* ragsoc;//char ragsoc[20];
	char* piva;//char piva[12];
	dati dipendenti[10];
	int contadip;
}datiaz; 
void dairag(datiaz* prendi,char* pernome);
void daipiva(datiaz* prendi,char* percognome);
void getimbro(datiaz* prendi,char* redat);
void inserdipazienda(datiaz* prendi,dati* impiegato);
void stampadipazienda(datiaz* prendi);
void infoaziendali(datiaz* prendi,char* info);
void inizializzadipaz(datiaz* prendi);
#endif