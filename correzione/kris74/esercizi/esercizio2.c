#include <stdio.h>

// TC: tabulazione

void rest(int a[], int c[], int l)
{
for (int i=0; i<l; i++)
c[i]=a[i]*a[i]*a[i];
}

int main()
{

int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6};
int leng = sizeof(array)/sizeof(int);
int c[leng];
int indice=0;

rest(array ,c, leng);
for(int i=0; i<10; i++)
printf("The cube %d\n", c[i]);

for(int i=0;i<leng;i++)
{
if(c[i]%3 == 0 && indice < 10)
{

printf("The cube divisible for 3 is %d\n", c[i]);
indice++;
}	
}
}