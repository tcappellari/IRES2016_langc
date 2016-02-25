int es1(int n)
{
    int a[n];
    int i=0;
    int j=n;
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n",i,j);
        j--;
    }
    return i,j;
}
