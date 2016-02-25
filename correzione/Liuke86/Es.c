#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(const void* a, const void* b){
	const int* pia = a;
	const int* pib = b;
	
	int ia = *pia;
	int ib = *pib;
	
	return ia < ib ? -1 : ia == ib ? 0 : 1;
	
	}

int main(){
	int a[] = {4,2,9,1};
	
	qsort (a, sizeof(a)/sizeof(int), sizeof(int), f);
	
	int i = 0;
	for(;i < sizeof(a)/sizeof(int); ++i){
		printf("%d", a[i]);
}
	return EXIT_SUCCESS;
}
