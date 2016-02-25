#include <stdio.h>

int main()
{
	int elem,j=0;
	printf("Quanti numeri vuoi inserire nell'array? ");
	scanf("%d", &elem);
	int vettoreA[elem], vettoreB[elem];
	for (int i=0; i<elem; i++)
	{
		printf("Inserisci numero: ");
		scanf("%d", &vettoreA[i]);
	}
	for(int i=0; i<elem; i++)
	{
		if(vettoreA[i]%2==1)
			{
				vettoreB[j]=vettoreA[i];
				j++;
			}
	}
	for(int i=0; i<elem; i++)
	{
		if(vettoreA[i]%2==0)
			{
				vettoreB[j]=vettoreA[i];
				j++;
			}
	}
	for (int i=0; i<elem; i++)
	{
		printf("%d  ", vettoreB[i]);
	}
	return 0;
}

