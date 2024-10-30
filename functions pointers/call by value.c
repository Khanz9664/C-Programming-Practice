//everything done so far is call by value
#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x: %d y: %d\n",x,y);
    return;
}
int sum(int m, int n)
{
    return m+n;
}
int main()
{
    int x,y;
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);
    swap(x,y);
    //after swapping using swap fun orginal values remain unchanged
    //limitation of this call by value
    printf("x: %d y: %d",x,y);
    int i=sum(4,5);
    printf("\nsum = %d",i);
    return 0;
}