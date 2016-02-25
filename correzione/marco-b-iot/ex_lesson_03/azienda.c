#include "azienda.h"
#include <string.h>
#include <stdio.h>


void Azienda_setPiva(Azienda *a, char *piva){
   	int length = sizeof(a->piva)/sizeof(char);
    strncpy(a->piva, piva, length);
    a->piva[length-1]='\0'; //per sicurezza

}

int Azienda_addPerson(Azienda *a, Person p){
    a->dipendenti[a->nDipendenti]=p;
    a->nDipendenti++;
    return 0;

}

int Azienda_searchPerson(Azienda *a, Person p){
    int i;
    for (i=0;i<a->nDipendenti;i++){
        if ((a->dipendenti[i].age==p.age)&&!(strcmp(a->dipendenti[i].name,p.name))&&!(strcmp(a->dipendenti[i].surname,p.surname)))
            break;
    }
    return i;
}

int Azienda_delIPerson(Azienda *a, int dip){
    int i;
    if (dip<a->nDipendenti){
        for (i=dip+1;i<a->nDipendenti;i++)
            a->dipendenti[i-1]=a->dipendenti[i];
        a->nDipendenti--;
        return 0;
    }
    return 1;
}

int Azienda_delPerson(Azienda *a, Person p){
    int i;

    return Azienda_delIPerson(a, Azienda_searchPerson(a,p));
}

void Azienda_setRagioneSociale(Azienda *a, char *ragionesociale){
    int length = sizeof(a->ragioneSociale)/sizeof(char);
    strncpy(a->ragioneSociale, ragionesociale, length);
    a->ragioneSociale[length-1]='\0';
}

void Azienda_getTimbro(Azienda *a, char *timbro){
    strcpy(timbro,"P.IVA ");
    strcat(timbro,a->piva);
    strcat(timbro," R.Soc ");
    strcat(timbro, a->ragioneSociale);
}

void Azienda_stampaBigliettiDip(Azienda *a){
    int i;
    char bv[51];
    for (i=0;i<a->nDipendenti;i++){
        Person_getBigliettoDaVisita(&(a->dipendenti[i]), bv);
        printf("%s ",bv);
    }
}

void Azienda_stampaBigliettiTimbro(Azienda *a){
    char timbro[51];
    Azienda_stampaBigliettiDip(a);
    Azienda_getTimbro(a, timbro);
    printf("- %s ", timbro);
}
