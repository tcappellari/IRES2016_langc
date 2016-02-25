#include <stdio.h>
#include <stdlib.h>

#include "es1.h"
#include "es2.h"
#include "es3.h"
#include "es4.h"
#include "es5.h"
#include "es6.h"
#include "es7.h"
#include "es8.h"
#include "es9.h"
#include "es10.h"
#include "es11.h"

int main()
{
    printf("Esercizio 1\n\n");
    int n1=20;
    int rises1=es1(n1);

    printf("\nEsercizio 2\n\n");
    int a2[]={2,4,6,-2,1};
    printf("somma = %d\n",es2(a2));

    printf("\nEsercizio 3\n\n");
    int n3=50;
    printf("somma dei primi %d = %d\n",n3,es3(n3));

    printf("\nEsercizio 4\n\n");
    int a4[]={2,4,6,-2,1};
    float rises4=es4(a4,sizeof(a4)/sizeof(int));
    printf("%.2f\n",rises4);

    printf("\nEsercizio 5\n\n");
    int a5=2;
    int b5=8;
    printf("somma tra %d e %d = %d\n",a5,b5,es5(a5,b5));

    printf("\nEsercizio 6\n\n");
    int a6=3;
    int b6=5;
    printf("%d x %d = %d\n",a6,b6,es6(a6,b6));

    printf("\nEsercizio 7\n\n");
    int x7=3;
    int y7=4;
    printf("%d ^ %d = %d\n",x7,y7,es7(x7,y7));

    printf("\nEsercizio 8\n\n");
    int a8[]={2,4,7,3,9};
    int rises8=es8(a8,sizeof(a8)/sizeof(int));

    printf("\nEsercizio 9\n\n");
    int a9[]={2,4,7,3,9};
    int rises9=es9(a9,sizeof(a9)/sizeof(int));

    printf("\nEsercizio 10\n\n");
    int a10=4;
    int n10=9;
    int rises10=es10(a10,n10);

    printf("\nEsercizio 11\n\n");
    int A11[]={2,4,7,3,2,9,5};
    int rises11=es11(A11, sizeof(A11)/sizeof(int));
}
