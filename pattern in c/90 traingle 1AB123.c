#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,a;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        }
        else
        {
            a=65;
            for(j=1;j<=i;j++)
            {
                printf("%c ",a);
                a+=1;
            }
        }
        printf("\n");
    }
    return 0;
}