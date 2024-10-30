/*
    find the sum of elements of matrix
*/#include <stdio.h>
int main()
{
    int m,n;
    printf("enter the no. of rows: ");
    scanf("%d",&m);
    printf("enter the no. of cols: ");
    scanf("%d",&n);
    int arr[m][n];
    int sum;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}