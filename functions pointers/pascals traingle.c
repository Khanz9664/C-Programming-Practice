#include <stdio.h>
int factorial(int a)
{
    int x = 1, i;
    for (i = 1; i <= a; i++)
    {
        x = x * i;
    }
    return x;
}
int combination(int n,int r)
{
    int ncr;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int row,i,j,k,result;
    printf("enter the no of rows: ");
    scanf("%d",&row);
    for(i=0;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            result=combination(i,j);
            printf("%d ",result);
        }
        printf("\n");
    }
    //beekar and inefficient method becaz of so much calculations 
    return 0;
}