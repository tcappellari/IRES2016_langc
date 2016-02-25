#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "f2.h"

void f2(int* aor, int* afi, int dim) {
	for (int i=0; i < dim; ++i) {
		afi[i] = aor[i]*aor[i]*aor[i];
	}
}
