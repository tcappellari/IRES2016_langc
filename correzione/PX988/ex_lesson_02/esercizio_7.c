#include <stdio.h>

int mult(int a, int b)
{
	int m = 0;
	for (int i = 0; i < a; i++)
		m += b;

	return m;
}

int powr(int x, int y)
{
	if (y == 0)
		return 1;

	return mult(x, powr(x, y-1));
}

void main()
{
	int x = 3, y = 4;

	int p = powr(x, y);
	printf("%d\n", p);
}
