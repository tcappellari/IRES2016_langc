#include <stdio.h>
#include <math.h>
#include <stdlib.h>




/*void init(int a[]) {
	
	for(int idx=1; idx < 10; ++idx){
		a[idx]= idx * 6;
	}
	for(int i = 0; i<10;++i){
		printf("Array [%d] = %d\n",i, a[i]);
	}
}*/

// TC: non restituisce radice quadrata
double radiceQuadrata (int array[]){
	
	int b[10];
	int risultato = 0;
	for(int i = 0;i<10;++i)
	{
		b[i]=array[i] * array[i];
		risultato+=b[i];
	}
	
	return 0;
}

// TC: tabulazione...
int main(){
	
	int a[10]={6,12,18,24,30,36,42,48,54,60};
	for(int i=0;i<10;++i){
		printf("a[%d]= %d\n",i,a[i]);
		}
	
	for(int i = 0;i<10;++i)
	{
		a[i]=a[i] * a[i];
		
	}
			//printf("\n");
	for(int i=0;i<10;++i)
	{
		printf("a[%d]= %d\n",i,a[i]);
	}
	printf("\n");
		int somma=0;
		for(int i= 0;i<10;++i){
			somma+=a[i];
			
			}
		printf("%d\n", somma);
		
		float radice=sqrt(somma);
		printf("radice %f",radice);
	//printf("l'array è = %f\n ", radiceQuadrata(a));
	
	return 0;
	
	}

