#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i==j || i+j==row+1)
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