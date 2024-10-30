#include<stdio.h>
#include<conio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter the coordinates of first point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates of 2nd point: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinates of 3rd point: ");
    scanf("%d %d",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1==m2)
    {
        printf("3 points lie on straight line");
    }
    else
    {
        printf("dont lie on straight line");
    }
}