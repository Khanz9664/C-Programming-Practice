/*
    maximum element in 2d array
*/
#include <stdio.h>
int main()
{
    int m1[3][3]={{1,3,2},{1,5,4},{3,2,6}};
    int max,min;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    max=m1[0][0];
    int x,y;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m1[i][j]>=max)
            {
                max=m1[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d is largest fount at [%d][%d]",max,x,y);
    printf("\n");
    min=m1[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m1[i][j]<=min)
            {
                min=m1[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d is smallest found at [%d][%d]",min,x,y);
    return 0;
}