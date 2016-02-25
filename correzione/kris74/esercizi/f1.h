// TC: implementazione su .h

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