#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j;
    printf("enter the odd number of rows: ");
    scanf("%d",&row);
    int mid=(row/2)+1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(j==mid || i==mid)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}