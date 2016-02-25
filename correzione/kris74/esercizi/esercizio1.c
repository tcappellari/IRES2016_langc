#include <stdio.h>
#include <math.h>

// TC: tabulazione
double radicequadrata(int array[])
{
	int b[10];
	int risultato=0;
	for(int i=0; i<10; i++)
{
	b[i]=array[i]*array[i];
	risultato +=b[i];
}
return sqrt(risultato);
}

int main() {

int array[]={6,12,18,24,30,36,42,48,54,60};
printf("Il risultato è %f\n", radicequadrata(array));
}	