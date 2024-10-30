#include<stdio.h>
int sum(int n)
{
    if(n==0) return n;//base case
    return n+sum(n-1);//recursively calling itself
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int s=sum(n);
    printf("sum of %d terms is: %d",n,s);
    return 0;
}