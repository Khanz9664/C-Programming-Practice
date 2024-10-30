#include<stdio.h>
int main()
{
    int row,i,j,a=1;
    printf("enter the numbr of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}