#ifndef AZIENDA_H
#define AZIENDA

typedef struct {
	char piva[11];
	char ragionesociale[10];
} DatiAzienda;

void DatiAzienda_setPIVA(DatiAzienda* this, char* piva);
void DatiAzienda_setRagioneSociale(DatiAzienda* this, char* ragionesociale);
void DatiAzienda_getTimbro(DatiAzienda* this, char* timbro);

#endif // AZIENDA
