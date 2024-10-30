#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,k,a=1;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        for(k=a-1;k>=1;k--)
        {
            printf("%d",k);
        }
        a+=1;
        printf("\n");
    }
    return 0;
}