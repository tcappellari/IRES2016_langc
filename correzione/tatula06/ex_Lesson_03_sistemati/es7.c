int es7(int a, int b)
{
    int i=0;
    int moltiplica=1;
    for (i=0;i<b;i++){
        moltiplica=es6(moltiplica,a);
    }
    return moltiplica;
}
