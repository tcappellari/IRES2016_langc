#include <stdio.h>

void esercizio_4()
{
	int array[] = {2, 4, 6, -2, 1};
	int length = sizeof(array)/sizeof(int);

	float average = 0;
	for (int i = 0; i < length; ++i)
		average += array[i];
	average /= length;

	printf("%f\n", average);
}
