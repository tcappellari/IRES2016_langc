#include <stdio.h>

int main()
{
    int n, variabile = 1, somma = 0;
    printf("Dammi n (intero positivo): ");
    scanf("%d", &n);
    while(variabile<=n)
    {
        if((variabile%2)==1)
        {
            somma += variabile;
            printf("%d ", variabile);
        }
        variabile++;
    }
    printf("\nSomma dei primi %d interi positivi dispari: %d\n", n, somma);
    return 0;
}
