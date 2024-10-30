#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    printf("enter the number of colmns: ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}