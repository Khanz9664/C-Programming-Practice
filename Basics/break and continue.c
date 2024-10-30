#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    printf("even numbers: ");
    for(i=2;i<=100;i++)
    {
        if(i%2 != 0)
        {
            continue;
        }
        printf("%d ",i);
    }
    printf("\n \n");
    for(i=2;i<n;i++)
    {
        if(i%10==0)
        {
            break;
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}