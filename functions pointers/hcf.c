#include<stdio.h>
int min(int x, int y)
{
    if(x>y) return y;
    else return x;
}
int gcd(int x, int y)
{
    int hcf;
    for(int i=1;i<=min(x,y);i++)
    //for(i=min(x,y);i>=1;i++) with break 
    //more efficient 
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int main()
{
    int x,y;
    printf("enter 1st num: ");
    scanf("%d",&x);
    printf("enter 2nd num: ");
    scanf("%d",&y);
    int hcf=gcd(x,y);
    printf("hcf of %d and %d : %d",x,y,hcf);
    return 0;
}