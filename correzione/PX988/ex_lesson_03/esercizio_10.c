#include <stdio.h>

void esercizio_10()
{
	int a = 4, n = 9;

	int arr[n];
	for (int i = 0; i < n; ++i)
		arr[i] = a;

	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);	
	printf("\n");
}
