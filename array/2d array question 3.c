/*
    add two matrix
    both the matrix should be equal
*/
#include <stdio.h>
int main()
{
    int m1[3][3]={{1,3,2},{6,5,4},{3,2,1}};
    int m2[3][3]={{1,2,3},{3,2,6},{1,1,3}};
    int sum[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//
//
// without using extra array we can sum two arrays 
//    for adding two arrays
//      for(int i=0;i<3;i++)
//      {
//          for(int j=0;j<3;j++)
//          {
//              m1[i][j]+=m2[i][j];
//          }
//      }
//    for printing the sum of two arrays
//      for(int i=0;i<3;i++)
//      {
//          for(int j=0;j<3;j++)
//          {
//              printf("%d ",m1[i][j]);
//          }
//          printf("\n");
//      }