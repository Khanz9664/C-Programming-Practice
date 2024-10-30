#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("enter the number: ");
    scanf("%d",&x);
    int count=0;
    while(x>0)
    {
        x=x/10;
        count++;
    }
    printf("%d",count);
    return 0;

}