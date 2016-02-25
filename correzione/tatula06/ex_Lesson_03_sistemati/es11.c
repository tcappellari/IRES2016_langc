int es11(int* pA, int n)
{
    int B[n];
    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        if(pA[i]%2==1){
            printf("B[%d] = %d\n",j,pA[i]);
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(pA[i]%2==0){
            printf("B[%d] = %d\n",j,pA[i]);
            j++;
        }
    }
}
