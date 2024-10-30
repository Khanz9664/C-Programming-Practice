#include <stdio.h>
int factorial(int a)
{
    int x = 1, i;
    for (i = 1; i <= a; i++)
    {
        x = x * i;
    }
    return x;
}
int combination(int n,int r)
{
    int ncr;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n, r, result;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the value of r: ");
    scanf("%d", &r);
    result = combination(n,r);
    printf("%d", result);
    return 0;
}