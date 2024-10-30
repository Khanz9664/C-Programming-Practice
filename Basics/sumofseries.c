#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0,summ=0;
    printf("enter the length of series: ");
    scanf("%d",&n);
    // 1-2+3-4+5-6+7.......n
    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }
    printf("sum = %d \n",sum);
    //math formula to reduce complexity
    if(n%2==0) summ=(-n/2);
    else summ=(-n/2)+n;
    printf("summ = %d",summ);
    return 0;
}