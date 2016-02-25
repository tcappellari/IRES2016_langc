#include <stdio.h>

void main()
{
	int a = 4, n = 9;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = a;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
