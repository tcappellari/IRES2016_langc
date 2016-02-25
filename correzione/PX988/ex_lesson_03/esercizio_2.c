#include <stdio.h>

void esercizio_2()
{
	int arr[] = {2, 4, 6, -2, 1};

	int sum = 0;
	for (int i = 0; i < sizeof(arr)/sizeof(int); ++i)
	{
		if (arr[i] < 0)
			break;

		sum += arr[i];
	}

	printf("%d\n", sum);
}
