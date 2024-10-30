/*
    wap to store 10 at every index of a 2d arrzy
    with 5 rows and 5 cols
*/
#include <stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            arr[i][j]=10;
        }
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}