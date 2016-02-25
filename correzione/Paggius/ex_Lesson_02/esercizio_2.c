#include <stdio.h>

void main(){
	int elementi, somma=0, j=0;
	printf("Quanti numeri vuoi inserire nell'array?\n");
	scanf("%d",&elementi);
	int vettore[elementi];
	for(int i=0; i<elementi;i++){
		printf("Inserisci il %d numero\n",(i+1));
		scanf("%d", &vettore[i]);
	}
	while(vettore[j]>0){
		somma += vettore[j];
		j++;
	}
	printf("Somma: %d",somma);
	scanf("");
}
