#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i,result=1;
    printf("enter the number: ");
    scanf("%d",&x);
    printf("enter the power f number: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        result=result*x;
         //2 power 20 --> 2pow1,2pow2,2pow3,......
        printf("\n %d power %d = %d",x,i,result);
    }
        //2pow3-->2pow3
    printf("\n x:%d power y:%d = %d",x,y,result);
    return 0;
}