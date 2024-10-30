#include<stdio.h>
int factorial(int n)
{
    if(n==1 || n==0) return 1;//base case
    return n*factorial(n-1);//recursively calling itself
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial of %d is: %d",n,fact);
    return 0;
}