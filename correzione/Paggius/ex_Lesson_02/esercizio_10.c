#include <stdio.h>

int main()
{
	int a,n;
	printf("Dammi a maggiore di 0: ");
	scanf("%d", &a);
	printf("Dammi n maggiore di 0: ");
	scanf("%d", &n);
	int vettore[n];
	for (int i=0; i<n; i++)
	{	
		vettore[i] = a;
		printf("%d  ", vettore[i]);
	}
	return 0;
}

