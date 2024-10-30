#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,factorial;
    printf("enter the number: ");
    scanf("%d",&n);
    // for(j=n;j>=0;j--)
    // {
    //     factorial=1;
    //     for(i=2;i<=j;i++)
    //     {
    //         factorial=factorial*i;
    //     }
    //     printf("\n factorial %d = %d",j,factorial);
    // }
    factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
        printf("\n factorial of %d = %d",i,factorial);
    }
    return 0;
}