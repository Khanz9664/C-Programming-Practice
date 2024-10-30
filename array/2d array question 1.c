/*
    wap to store roll no and marks obtained by 4 students
    side by side in a matrix
*/
#include <stdio.h>
int main()
{
    int marks[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}