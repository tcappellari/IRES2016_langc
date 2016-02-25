#include <stdio.h>
#include <stdlib.h>//definisce EXIT_SUCCESS

int main()
{
	int myarray[]={2,4,6,2,1};
	int i=0;
	int item=myarray[i];
	while (item>0 && i<sizeof(myarray)/sizeof(int))
	{
		printf("i=%d,item=%d\n",i,item );
		int sum= 0;
		sum +=item;
		i++;
		item=myarray[i];
	}

	printf("Somma = %d\n",sum );

	return -EXIT_SUCCESS;
}