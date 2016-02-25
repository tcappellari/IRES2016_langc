#include <stdio.h>
#include <stdlib.h>

#include "esercizio_1.h"
#include "esercizio_2.h"
#include "esercizio_3.h"
#include "esercizio_4.h"
#include "esercizio_5.h"
#include "esercizio_6.h"
#include "esercizio_7.h"
#include "esercizio_8.h"
#include "esercizio_9.h"
#include "esercizio_10.h"
#include "esercizio_11.h"

int main()
{
    printf("Esercizio 1\n\n");
    int n1=20;
    int rises1 = es1(n1);

    printf("\nEsercizio 2\n\n");
    int a2[]={2,4,6,-2,1};
    int rises2 = es2(a2);
    printf("Somma = %d\n",rises2);

    printf("\nEsercizio 3\n\n");
    int n3=50;
    int rises3=es3(n3);
    printf("Somma dei primi %d numeri dispari = %d\n",n3,rises3);

    printf("\nEsercizio 4\n\n");
    int a4[]={2,4,6,-2,1};
    float rises4=es4(a4);
    printf("Media = %.2f\n",rises4);

    printf("\nEsercizio 5\n\n");
    int a5=2;
    int b5=8;
    int rises5=es5(a5,b5);
    printf("Somma compresa tra a=%d e b=%d = %d\n",a5,b5,rises5);

    printf("\nEsercizio 6\n\n");
    int a6=3;
    int b6=5;
    int rises6=es6(a6,b6);
    printf("%d x %d = %d\n",a6,b6,rises6);

    printf("\nEsercizio 7\n\n");
    int a7=3;
    int b7=4;
    int rises7=es7(a7,b7);
    printf("%d ^ %d = %d\n",a7,b7,rises7);

    printf("\nEsercizio 8\n\n");
    int a8[]={2,4,7,3,9};
    int rises8=es8(a8);

    printf("\nEsercizio 9\n\n");
    int a9[]={2,4,7,3,9};
    int rises9=es9(a9);

    printf("\nEsercizio 10\n\n");
    int a10=4;
    int n10=9;
    int rises10=es10(a10,n10);
    printf("%d ",rises10);
    printf("\n");

    printf("\nEsercizio 11\n\n");
    int A11[]={2,4,7,3,2,9,5};
    int rises11=es11(A11);


    return 0;
}
