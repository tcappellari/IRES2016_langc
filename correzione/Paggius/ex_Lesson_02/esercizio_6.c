#include<stdio.h>

int main()
{
    int a,b;
    printf("Dammi i due numeri: \n");
    /*scanf("%d",&a);
    printf("Dammi b: ");*/
    scanf("%d %d",&a,&b);
    printf("\nIl prodotto risulta: %d", mult(a,b));
    return 0;
}

int mult(int a, int b)
{
    int totale=0;
    for(int i=1;i<=a;i++)
        totale += b;
    return totale;
}
