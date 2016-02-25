#include <stdio.h>

int mult(int a, int b)
{
    int totale=0;
    for(int i=1;i<=a;i++)
        totale += b;
    return totale;
}

int potenza(int base, int esponente)
{
	if(esponente==1)
		return base;
	else
	{
		int temp=mult(base,base);	//Assegno subito il risultato di base^2
		for(int i=1; i<=(esponente-2); i++)
		{
			temp = mult(temp,base);
		}
		return temp;
	}
}

int main()
{
	int base, esponente;
	printf("Inserisci la base: ");
	scanf("%d", &base);
	printf("Inserisci l'esponente: ");
	scanf("%d", &esponente);
	if(esponente==0)
		printf("Potenza calcolata: 1");
	else 
		printf("Potenza calcolata con le somme: %d\n", potenza(base,esponente));
	return 0;
}




