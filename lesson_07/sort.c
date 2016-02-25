
#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

// a < b => restituisco -1
// a == b => restituisco 0
// a > b => restituisco 1
int f(const void* a, const void* b) {
	// int perchè il mio array è un array di interi
	const int* pia = a;
	const int* pib = b;

	int ia = *pia;
	int ib = *pib;
/*
	int y = 3 + 2
	int x = 3 < 2 ? f(5) : 6
*/

	return ia < ib ? -1 : ia == ib ? 0 : 1;

}

int main() {
	
	int a[] = {4,2,9,1};

/*
    void qsort(void *base,   // base è un puntatore a primo elemento dell'array
    		   size_t nmemb, // nmemb è il numero elementi di a
    		   size_t size,  // size è la dimensione elemento di a
               int (*compar)(const void *, const void *) // compar è un 
               			// puntatore a una funzione che accetta in input due puntatori a void
               			// e restituisce un intero.
               );
    */
	qsort(a,
		  sizeof(a)/sizeof(int), // 4 in questo esempio
		  sizeof(int),
		  f);

	// l'array a qui è ordinato
	int i = 0;
	for(;i < sizeof(a)/sizeof(int); ++i) {
		printf("%d\n", a[i]);
	}



	return EXIT_SUCCESS;

}