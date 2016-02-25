float es4(int* pa, int n)
{
    int i=0;
    float somma=0;
    for(i=0;i<5;i++){
        somma+=pa[i];
    }
    float media=somma/n;
    return media;
}
