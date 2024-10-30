#include<stdio.h>
int main()
{
    int row,i,j,a=1;
    printf("enter the numbr of rows: ");
    scanf("%d",&row);
    // for(i=1;i<=row;i++)
    // {
    //     if(i%2!=0) a=1;
    //     else a=0;
    //         for(j=1;j<=i;j++)
    //         {
    //             printf(" %d ",a);
    //             if(a==0) a=1;
    //             else a=0;
    //         }
    //     printf("\n");
    // }
    for (i=0;i<=row;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==j || (i+j)%2==0)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}