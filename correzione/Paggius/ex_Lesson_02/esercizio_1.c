#include <stdio.h>
#define elementi 20
void main(){
	int numeri[elementi];
	for(int i=0;i<elementi;i++){
		numeri[i]=elementi-i;
	}
	for(int j=0;j<elementi;j++){
		printf("%d ", numeri[j]);
	}
	printf("\n");
}
