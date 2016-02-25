#ifndef Gino
#define Gino
//#include "persone.c"
typedef struct
{
	char* nome;//char nome[15];
	char* cognome;//char cognome[15];
}dati; 
void dainome(dati* prendi,char* pernome);
void daicognome(dati* prendi,char* percognome);
void rendidati(dati* prendi,char* redat);
#endif
