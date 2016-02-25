#include <stdio.h>

void main()
{
	int arr1[] = {2, 4, 7, 3, 9};
	int len = 5;

	int arr2[len];
	for (int i = 0, j = len-1; i < len; i++, j--)
		arr2[j] = arr1[i];

	for (int i = 0; i < len; i++)
		printf("%d ", arr2[i]);

	printf("\n");
}
