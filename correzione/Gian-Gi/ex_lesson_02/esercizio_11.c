//----------------------------------------------------------------------
// esercizio_11.c
//----------------------------------------------------------------------
// Dato un array di interi A, si crei un nuovo array B contenente gli
// elementi dell’array A riordinato in modo tale che tutti gli elementi
// dispari precedano nello stesso ordine tutti gli elementi pari.
// Testare l’esercizio stampando a console l’array B usando
// l’array A = {2,4,7,3,2,9,5}.
//----------------------------------------------------------------------

#include <stdio.h>

void main()
{
    int A[] = {2, 4, 7, 3, 2, 9, 5};
    int max = sizeof(A)/sizeof(A[0]);
    int B[max];
    int aB = 0;
    int iB = max-1;
    for (int aA=0, iA=max-1; aA<max, iA>=0; ++aA, --iA)
    {
        if (A[aA]%2 != 0)
        {
            B[aB] = A[aA];
            ++aB;
        }
        if (A[iA]%2 == 0)
        {
            B[iB] = A[iA];
            --iB;
        }
    }
    for (int i=0; i<max; ++i)
    {
        printf("\n%d %d", A[i], B[i]);
    }
    printf("\n\n");
}
