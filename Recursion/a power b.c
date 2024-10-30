#include<stdio.h>
int power(int a, int b)
{
    if(b==0) return 1; //base case
    return a*power(a,b-1);//recursively calling itself
}
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter power of number: ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d power %d is: %d",a,b,p);
    return 0;
}