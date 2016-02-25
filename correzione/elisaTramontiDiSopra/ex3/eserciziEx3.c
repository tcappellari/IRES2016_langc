#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "f1.h"
#include "f2.h"




int main() {
	int a[10] = {6,12,18,24,30,36,42,48,54,60};
	int size = sizeof(a)/sizeof(int);
	cubiNumeri(a, size);
	sqrtsum(a, size);
	return EXIT_SUCCESS;
}