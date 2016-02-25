#include <stdio.h>

int main()
{
	int a, b, somma=0;
	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);
	if(a>b)
	{
		for(int i=b; i<=a; i++)
			somma += i;
	}
	else
	{
		for(int i=a; i<=b; i++)
			somma += i;
	}
	printf("\nLa somma risulta: %d\n", somma);
	return 0;
}

