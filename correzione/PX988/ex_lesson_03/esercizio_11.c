#include <stdio.h>

void esercizio_11()
{
	int A[] = {2, 4, 7, 3, 2, 9, 5};
	int len = sizeof(A)/sizeof(int);

	int B[len];
	int i1 = 0, j1 = len-1;
	for (int i2 = 0, j2 = len-1; i2 < len; ++i2, --j2)
	{
		if (A[i2]%2 != 0)
		{
			B[i1] = A[i2];
			++i1;
		}
		if (A[j2]%2 == 0)
		{
			B[j1] = A[j2];
			--j1;
		}
	}

	for (int i = 0; i < len; ++i)
		printf("%d ", B[i]);
	printf("\n");
}
