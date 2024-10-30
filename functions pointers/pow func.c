#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    printf("enter the num: ");
    scanf("%d",&x);
    printf("enter the power: ");
    scanf("%d",&y);
    z=pow(x,y);
    printf("%d power %d = %d",x,y,z);
    return 0;
}