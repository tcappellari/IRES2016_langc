#include <stdio.h>

void esercizio_3()
{
	int n = 50;
	
	int sum = 0;
	for (int i = 0, odd = 1; i < n; ++i, odd += 2)
		sum += odd;

	printf("%d\n", sum);
}
