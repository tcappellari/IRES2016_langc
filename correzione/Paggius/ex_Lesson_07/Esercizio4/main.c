#include <stdio.h>
#include <stdlib.h>
#include "software.h"

// TC: manca creazione array di software
int main()
{
	Software arcipigna;
	char* nome;
	setName(&arcipigna, "GinkoBiloba");
	nome = malloc(sizeof(*arcipigna.nomesw));
	getName(&arcipigna, nome);
	printf("%s\n", nome);
	return EXIT_SUCCESS;
}


