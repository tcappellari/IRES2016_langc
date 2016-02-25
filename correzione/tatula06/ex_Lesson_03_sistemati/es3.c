int es3(int n)
{
    int a[n];
    int i=0;
    int j=1;
    int somma=0;
    for(i=0;i<n;i++){
        somma=somma+j;
        j=j+2;
    }
    return somma;
}
