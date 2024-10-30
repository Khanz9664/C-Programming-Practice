#include <stdio.h>
#include <conio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter the length of rectangle: ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle: ");
    scanf("%d",&b);
    perimeter=2*(l+b);
    area=l*b;
    printf(" perimeter = %d \n area = %d \n",perimeter,area);
    if(area>perimeter)
    {
        printf("area > perimeter");
    }
    else
    {
        if(perimeter>area)
        {
            printf("perimeter > area");
        }
        else
        {
            printf("perimeter = area");
        }
    }
    return 0;
}