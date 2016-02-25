#include "mult.h"

int powr(int x, int y)
{
	if (y == 0)
		return 1;

	return mult(x, powr(x, y-1));
}
