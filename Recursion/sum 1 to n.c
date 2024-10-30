#include <stdio.h>
//parameterized int s 
void sum(int n, int s)
{
    if(n==0)
    {
        printf("sum = %d",s);
        return;
    } 
    s=s+n;
    sum(n-1,s); //value of s sent to recursive call
    return;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    sum(n,0); //0 is sent as initial value of s
    return 0;
}