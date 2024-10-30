#include<stdio.h>
void primefactors(int x)
{
    int i,j;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            int count=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count=0;
                    break;
                }
            }
            if(count==1)
            {
                printf("%d is primefactor\n",i);
            }
        }
    }
}
int main()
{
    int x;
    printf("enter the num: ");
    scanf("%d",&x);
    primefactors(x);
    return 0;
}