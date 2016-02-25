int es5(int a, int b)
{
    int min=a;
    int max=b;
    if(a>b){
        min=b;
        max=a;
    }
    int n=max-min+1;
    int mioa[n];
    int i=0;
    int somma=0;
    int j=min;
    for(i=0;i<n;i++){
        somma+=j;
        j++;
    }
    return somma;
}
