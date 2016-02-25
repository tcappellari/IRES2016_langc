#include <stdio.h> 
#include <stdlib.h> // define printf
#include <string.h>
#include "persone.h"

void dainome(dati* prendi,char* pernome)
{   
	int lstringa = strlen(pernome);//int lstringa=sizeof(prendi->nome)/sizeof(char);
	prendi->nome = malloc(lstringa+1);
	strcpy(prendi->nome,pernome);//strncpy(prendi->nome,pernome,lstringa);
	//prendi->nome[lstringa-1]='\0';
}
void daicognome(dati* prendi,char* percognome)
{
	int lstringa = strlen(percognome);//int lstringa=(sizeof(prendi->cognome)/sizeof(char));
	prendi->cognome = malloc(lstringa +1);
	strcpy(prendi->cognome,percognome);// strncpy(prendi->cognome,percognome,lstringa);
	//prendi->cognome[lstringa-1]='\0';
}
void rendidati(dati* prendi,char* redat)
{
	strcpy(redat,prendi->nome);
	strcat(redat," ");
	strcat(redat,prendi->cognome);
}

