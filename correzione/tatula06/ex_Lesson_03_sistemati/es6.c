int es6(int a, int b)
{
    int i=0;
    int somma=0;
    if(b==0){
        somma=0;
    }
    else{
        for(i=0;i<b;i++){
            somma+=a;
        }
    }
    return somma;
}
