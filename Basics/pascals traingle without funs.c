#include<stdio.h>
int main()
{
    int row,i,j,k;
    printf("enter the no of rows: ");
    scanf("%d",&row);
    for(i=0;i<=row;i++)
    {
        for(k=0;k<row-i;k++)
        {
            printf(" ");
        }
        int first=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    //another method using nCr formulae in function group
    return 0;
}