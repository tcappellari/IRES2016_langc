#include <stdio.h>
#include <stdlib.h>//definisce EXIT_SUCCESS
int mult(int a,int b){
	//b+b+b+b+  a volte
	int sum=0;
	for(int i=0;i<a;++i)
	{
		sum +=b;
	}
	return sum;
}
int main(){

	int result =mult(2,3);
	printf("%d\n",result );







	return EXIT_SUCCESS;
}