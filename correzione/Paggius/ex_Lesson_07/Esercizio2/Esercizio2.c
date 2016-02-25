#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// TC: cubatore piace.
void Cubatore(int* aor, int* afi, int dim) {
	for (int i=0; i < dim; ++i) {
		afi[i] = aor[i]*aor[i]*aor[i];
	}
}

int main()
{
	int arorig[] = {3,6,9,12,15,18,21,24,27,30};
	int arfin[10];
	Cubatore(arorig, arfin, sizeof(arorig)/sizeof(int));
	for (int i = 0; i < sizeof(arfin)/sizeof(int);++i) {
		printf("Originale[%d]: %d - Cubo[%d]: %d\n",i, arorig[i], i, arfin[i]);
	}
	return EXIT_SUCCESS;
}
