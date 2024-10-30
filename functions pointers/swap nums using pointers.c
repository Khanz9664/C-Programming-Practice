#include<stdio.h>
void swap(int *a, int *b)
{
    *a=*a+*b;  //n=n+m
    *b=*a-*b;  //m=n-m
    *a=*a-*b;  //n=n-m
    return;
}
int main()
{
    int n,m;
    printf("enter the first num: ");
    scanf("%d",&n);
    printf("enter the first num: ");
    scanf("%d",&m);
    printf("before swap \n n = %d \n m = %d \n",n,m);
    swap(&n,&m);
    printf("after swap \n n = %d \n m = %d",n,m);
    return 0;
}