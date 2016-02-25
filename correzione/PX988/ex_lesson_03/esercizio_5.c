#include <stdio.h>

void esercizio_5()
{
	int a = 2, b = 8;

	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}

	int sum = 0;
	for (int i = a; i <= b; ++i)
		sum += i;

	printf("%d\n", sum);
}
