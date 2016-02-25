#include <stdio.h>

void main()
{
	int arr[] = {2, 4, 6, -2, 1};
	int len = 5;

	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
			break;

		sum += arr[i];
	}

	printf("%d\n", sum);
}
