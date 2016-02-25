#include <stdio.h>

int mult(int a, int b)
{
	int m = 0;
	for (int i = 0; i < a; i++)
		m += b;

	return m;
}

void main()
{
	int a = 3, b = 5;
	int m = mult(a, b);
	printf("%d\n", m);
}
