#include <stdio.h>

void main()
{
	int array[20];

	for (int i = 0; i < 20; i++)
		array[i] = 20-i;

	for (int i = 0; i < 20; i++)
		printf("%d ", array[i]);

	printf("\n");
}
