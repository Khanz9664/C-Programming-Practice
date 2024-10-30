#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial = %d",factorial);
    return 0;
}