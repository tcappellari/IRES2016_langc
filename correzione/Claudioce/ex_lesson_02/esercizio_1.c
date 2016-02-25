#include <stdio.h>
//#include <stdlib.h>//definisce EXIT_SUCCESS

int main()
{
	int ar[20];
	//ar[0]=20;
	//ar[1]=19;
	int bylunar = sizeof(ar);
	int byinter=sizeof(int);
	int arlengh=bylunar/byinter;
	printf("bylunar=%d\n",bylunar);
	printf("byinter=%d\n",byinter);
	printf("arlengh%d\n",arlengh);
	for(int i=0;i<20;++i)
	{
		ar[i]=20-i;
		//printf("%d\n",i);
	}
	for(int i=0;i<20;++i){
		printf("ar[%d]=%d\n",i,ar[i]);
	}
	return 0;//EXIT_SUCCESS;
}