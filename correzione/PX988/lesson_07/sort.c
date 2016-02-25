#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int f(const void* a, const void* b)
{
	int* pia = a;
	int* pib = b;
	int ia = *pia;
	int ib = *pib;
	return ia < ib ? -1 : ia == ib ? 0 : 1;
}


int main()
{
	int a[] = {4,2,9,1};
	qsort(a, sizeof(a)/sizeof(int), size(int), f);
	return EXIT_SUCCESS;
}
