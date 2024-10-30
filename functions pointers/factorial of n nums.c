#include<stdio.h>
int factorial (int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
        printf("\nfactorial of %d is: %d",i,fact);
    }
}
int main()
{
    int x;
    printf("Enter the last num: ");
    scanf("%d",&x);
    factorial(x);
    return 0;
}