#include <stdio.h>

void main()
{
	int array[] = {2, 4, 6, -2, 11};
	int length = 5;

	float average = 0;
	for (int i = 0; i < length; i++)
		average += array[i];
	average /= length;

	printf("%f\n", average);
}
