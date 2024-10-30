#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,k,a=1,ns,ml;
    printf("enter the odd number of rows: ");
    scanf("%d",&row);
    ns=row-1;
    ml=(row/2)+1;
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=ns;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        if(i<ml)
        {
            ns-=1;
            a+=2;
        }
        else
        {
            ns+=1;
            a-=2;
        }
        printf("\n");
    }
    return 0;
}