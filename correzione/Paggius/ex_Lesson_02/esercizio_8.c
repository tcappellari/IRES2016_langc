#include <stdio.h>

int main()
{
	int elem;
	printf("Quanti numeri vuoi inserire nell'array? ");
	scanf("%d", &elem);
	int vettore[elem];
	for (int i=0; i<elem; i++)
	{
		printf("Inserisci numero: ");
		scanf("%d", &vettore[i]);
	}
	for (int i=(elem-1); i>=0; i--)
		printf("%d  ", vettore[i]);
	return 0;
}

