#include <stdio.h>

int main()
{
    int elementi, media=0;
    printf("Quanti oggetti vuoi inserire nell'array? ");
    scanf("%d", &elementi);
    int vettore[elementi];
    for(int i=0; i<elementi; i++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &vettore[i]);
    }
    for(int j=0; j<elementi; j++)
    {
        media += vettore[j];
    }
    printf("\nLa media e': %d", media);
    return 1;
}
