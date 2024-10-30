/*
    given a matrix A of dimensions MxN and two coordinates 
    (l1,r1) and (l2,r2).return the sum of rectangle from 
    the given coordinates
*/
#include <stdio.h>
int main()
{
    int m1[3][3]={{1,3,2},{1,5,4},{3,2,6}};
    int sum;
    int l1=0,r1=1,l2=2,r2=2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    sum=0;
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum+=m1[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}