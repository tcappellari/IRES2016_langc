#include <stdio.h>
#include <stdlib.h>//defin



int mult(int a,int b)
{
	//b+b+b+b+  a volte
	int sum=0;
	for(int i=0;i<a;++i)
	{
		sum +=b;
	}
	return sum;
}

int main()
{
	int mypow(int a,int b)
	{
		int molt=1;
		for(int i=0;i<b;++i){
			molt=mult(molt,a)
	}
	return molt;
}
	
