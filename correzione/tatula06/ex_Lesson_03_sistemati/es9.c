int es9(int* pa, int n)
{
    int b[n];
    int i=0;
    int j=0;
    for(i=n-1;i>=0;i--){
        printf("b[%d] = %d\n",j,pa[i]);
        j++;
    }
}
