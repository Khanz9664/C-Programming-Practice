#include<stdio.h>
#include<conio.h>
int main()
{
int row,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for(i=row;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}