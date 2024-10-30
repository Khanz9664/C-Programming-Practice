#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y,z;
    printf("enter the first num: ");
    scanf("%d",&x);
    printf("enter the 2nd num: ");
    scanf("%d",&y);
    z=sum(x,y);
    printf("sum= %d",z);
    return 0;
}