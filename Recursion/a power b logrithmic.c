#include<stdio.h>
int power(int n , int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {//if power is even
        int pow=power(n,p/2)*power(n,p/2);
        return pow;
    }
    else
    {//if power is odd
        int pow=power(n,p/2)*power(n,p/2)*n;
        return pow;
    }
}
int main()
{
    int n,p;
    printf("enter the num : ");
    scanf("%d",&n);
    printf("enter the power on num : ");
    scanf("%d",&p);
    int result=power(n,p);
    printf("%d power %d : %d",n,p,result);
    return 0;
}