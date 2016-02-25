#include <stdio.h>

void esercizio_8()
{
	int arr[] = {2, 4, 7, 3, 9};
	int len = sizeof(arr)/sizeof(int);

	for (int i = len-1; i >= 0; --i)
		printf("%d ", arr[i]);

	printf("\n");
}
