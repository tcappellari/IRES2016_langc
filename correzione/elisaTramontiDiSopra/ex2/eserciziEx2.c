#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// TC: deve restituire l'array
void cubiNumeri(int* a, int size) {
	int i=0;
	int b[10];
	for(; i < size; i++){
		int cubo = a[i]*a[i]*a[i];
		b[i] = cubo;
	printf("%d\n", b[i]);
	}
}

int main() {
	int a[10] = {6,12,18,24,30,36,42,48,54,60};
	int size = sizeof(a)/sizeof(int);
	cubiNumeri(a, size);
	return EXIT_SUCCESS;
}