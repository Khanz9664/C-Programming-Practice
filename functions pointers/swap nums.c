#include<stdio.h>
void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap \n a = %d \n b = %d",a,b);
}
int main()
{
    int n,m;
    printf("enter the first num: ");
    scanf("%d",&n);
    printf("enter the first num: ");
    scanf("%d",&m);
    printf("before swap \n a = %d \n b = %d \n",n,m);
    swap(n,m);
    return 0;
}