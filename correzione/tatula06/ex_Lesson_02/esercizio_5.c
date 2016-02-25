/*Dato un intervallo [a, b] con a e b due interi positivi, stampare a console la somma di tutti i
numeri compresi all’interno dell’intervallo, estremi inclusi. Nel caso che b fosse minore di a,
calcolare la somma nell’intervallo [b,a]
Esempio:
a =3; b = 5; Stampare a console: 12
a =5; b = 3; Stampare a console: 12
Testare l’esercizio usando:
a = 2; b = 8*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=2;
   int b=8;
   int max=b;
   int min=a;
   if(a>max){
      max=a;
      min=b;
   }
   int n=max-min+1;
   int mioa[n];
   int i=0;
   int j=min;
   int somma=0;
   for (i=0;i<n;i++){
        mioa[i]=i;
        somma=somma+j;
        j=j+1;
   }
   printf("Somma compresa tra a=%d e b=%d = %d\n",a,b,somma);
}
