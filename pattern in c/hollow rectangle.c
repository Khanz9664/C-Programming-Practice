#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of col: ");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
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