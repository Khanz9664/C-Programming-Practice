#include <stdio.h>
#include <conio.h>
int main()
{
    int p,sp,loss,profit;
    printf("enter the mrp: ");
    scanf("%d",&p);
    printf("enter the selling price: ");
    scanf("%d",&sp);
    if(sp > p)
    {
        profit=sp-p;
        printf("profit= %d",profit);
    }
    else
    {
        loss=p-sp;
        printf("loss %d",loss);
    }
    return 0;
}