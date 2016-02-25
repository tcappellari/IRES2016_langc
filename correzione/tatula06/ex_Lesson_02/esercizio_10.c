/*Dati due interi a, n maggiori di 0, creare un array di n elementi contenenti a e stampare
l’array a console.
Esempio:
a = 3; n = 4; Stampare: 3, 3, 3, 3
Testare l’esercizio usando a = 4, n = 9*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=4;
    int n=9;
    int b[n];
    int i=0;
    for (i=0;i<n;i++){
        b[i]=i;
        printf("%d ",a);
    }
	printf("\n");
}
