#include<stdio.h>
#include<conio.h>
int main()
{
    int num,remainder,reverse=0,sum=0;
    printf("eneter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("sum=%d \n",sum);
    remainder=0;
    num=temp;
    while(num>0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("reverse=%d",reverse);
    return 0;
}