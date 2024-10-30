#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of cols: ");
    scanf("%d",&c);
    // int arr[3][3]={{4,5,10},{1,6,3},{8,2,1}};
    // arr[0][0]=4;
    // arr[0][1]=5;
    // arr[1][0]=6;
    // arr[1][1]=3;
    // arr[2][0]=2;
    // arr[2][1]=1;
    int arr[r][c];
    //for taking matrix elements as input from user
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter element at %d,%d:  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //for printing matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}