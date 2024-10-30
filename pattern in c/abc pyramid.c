#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,k,a=1,b;
    printf("enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        b=65;
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%c",b);
            b+=1;
        }
        a+=2;
        printf("\n");
    }
    return 0;
}