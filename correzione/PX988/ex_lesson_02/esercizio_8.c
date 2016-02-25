#include <stdio.h>

void main()
{
	int arr[] = {2, 4, 7, 3, 9};
	int len = 5;

	for (int i = len-1; i >= 0; i--)
		printf("%d ", arr[i]);

	printf("\n");
}
