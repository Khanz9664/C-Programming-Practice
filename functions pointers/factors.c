#include<stdio.h>
int factors (int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        printf("\nfactors of %d are: ",i);
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                printf("%d ",j);
            }
        }
    }
}
int main()
{
    int x;
    printf("Enter the last num: ");
    scanf("%d",&x);
    factors(x);
    return 0;
}