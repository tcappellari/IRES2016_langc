#include <stdio.h>
#include <stdlib.h>//definisce EXIT_SUCCESS

int main()
{
	int n=50;
	int sum=0;
	int numeridisparitrovati=0;
	int item=0;

	while(numeridisparitrovati <n)
	{
		if(item%2 !=0)
		{
			sum += item;
			numeridisparitrovati++;
		}
		item++;
	}
	printf("totale con  %d elementi =%d\n",n,sum );
}