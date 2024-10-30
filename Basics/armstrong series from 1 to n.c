#include<stdio.h>
#include<conio.h>
int main()
{
    int num=500,i,j,remainder,result;
    printf("ARMSTRONG numbers within range 1-500:");
    for(j=1;j<=num;j++)
    {
        i=j;
        result=0;
        remainder=0;
        while(i>0)
        {
            remainder=i%10;
            result=result+(remainder*remainder*remainder);
            i=i/10;
        }
        if(j==result)
        {
            printf("\n %d ",j);
        }
    }
    return 0;
}