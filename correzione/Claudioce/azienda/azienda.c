#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>
#include "azienda.h"

void dairag(datiaz* prendi,char* pernome)
{
	int lstringa = strlen(pernome);//int lstringa=sizeof(prendi->ragsoc)/sizeof(char);
	prendi->ragsoc =malloc(lstringa+1);
	strcpy(prendi->ragsoc,pernome);// strncpy(prendi->ragsoc,pernome,lstringa);
	//prendi->ragsoc[lstringa-1]='\0';
}
void daipiva(datiaz* prendi,char* percognome)
{
	int lstringa =strlen(percognome);//int lstringa=(sizeof(prendi->piva)/sizeof(char));
	prendi->piva = malloc(lstringa +1);
	strcpy(prendi->piva,percognome);//strncpy(prendi->piva,percognome,lstringa);
	//prendi->piva[lstringa-1]='\0';
}
void getimbro(datiaz* prendi,char* redat)
{
	strcpy(redat,prendi->ragsoc);
	strcat(redat," Part.IVA ");
	strcat(redat,prendi->piva);
}
void inserdipazienda(datiaz* prendi,dati* impiegato)
{
	prendi->dipendenti[prendi->contadip]=*impiegato;
	prendi->contadip++;
}
void stampadipazienda(datiaz* prendi)
{
	for(int i=0 ;i<prendi->contadip;++i)
	{
		char carico[50];
		rendidati(&(prendi->dipendenti[i]),carico);
		printf("Impiegato n.%d Nome e Cognome %s\n",i,carico);
	}
}
void infoaziendali(datiaz* prendi,char* info)
{
	info[0]='\0';
	for(int i=0;i< prendi->contadip;++i)
	{
		char carico[100];
		rendidati(&(prendi->dipendenti[i]),carico);
		strcat(info,"  -----------------  \n");
		strcat(info," Impiegato : ");
		strcat(info,carico);
		strcat(info,"\n");
	}
	char infoaz[100];
	getimbro(prendi,infoaz);
	strcat(info,"  =================  \n");
	strcat(info,infoaz);
	strcat(info,"\n");
	strcat(info,"  =================  \n");

}
void inizializzadipaz(datiaz* prendi)
{
	prendi->contadip=0;
}
