#include <stdio.h>
#include <string.h>


#include "azienda.h"


void Azienda_setPIVA(Azienda* this, char* piva)
{
	int len = sizeof(this->piva)/sizeof(char);
	strncpy(this->piva, piva, len);
	this->piva[len - 1] = '\0';
}


void Azienda_setRagioneSociale(Azienda* this, char* ragioneSociale)
{
	int len = sizeof(this->ragioneSociale)/sizeof(char);
	strncpy(this->ragioneSociale, ragioneSociale, len);
	this->ragioneSociale[len - 1] = '\0';
}


void Azienda_getTimbro(Azienda* this, char* timbro)
{
	strcpy(timbro, this->ragioneSociale);
	strcat(timbro, "\nPIVA: ");
	strcat(timbro, this->piva);
}


void Azienda_printBigliettiDaVisita(Azienda* this)
{
	char bv[50];
	int len = sizeof(this->dipendenti)/sizeof(Person);
	for (int i = 0; i < len; ++i)
	{
		Person_getBigliettoDaVisita(this->dipendenti + i, bv);
		printf("%s\n", bv);
	}
}


void Azienda_getInfo(Azienda* this, char* bvs[], char* timbro)
{
	int len = sizeof(this->dipendenti)/sizeof(Person);	
	for (int i = 0; i < len; ++i)
	{
		Person_getBigliettoDaVisita(this->dipendenti + i, bvs[i]);
	}
	Azienda_getTimbro(this, timbro);
}
