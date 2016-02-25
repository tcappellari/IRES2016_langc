#include <stdio.h>

int main()
{
	int elem;
	printf("Quanti numeri vuoi inserire nell'array? ");
	scanf("%d", &elem);
	int vettore[elem], vettoreInv[elem];
	for (int i=0; i<elem; i++)
	{
		printf("Inserisci numero: ");
		scanf("%d", &vettore[i]);
	}
	for (int i=0; i<elem; i++)
	{
		vettoreInv[i] = vettore[elem-1-i];
		printf("%d  ", vettoreInv[i]);
	}
	return 0;
}

