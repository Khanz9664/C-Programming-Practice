#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("enter the no of rows of sparse matrix: ");
    scanf("%d",&rows);
    printf("enter the no of colmns of sparse matrix: ");
    scanf("%d",&cols);
    int sm[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("element at index [%d][%d] : ",i,j);
            scanf("%d",&sm[i][j]);
        }
    }
    printf("\n");
    printf("sparse matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",sm[i][j]);
        }
        printf("\n");
    }
    int nonZ=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(sm[i][j]!=0)
            {
                nonZ++;
            }
        }
    }
    printf("\n");
    int cm[nonZ+1][3];
    //first row of compact matrix is for storing number of rows, columns and no of non zero elements
    cm[0][0]=rows;
    cm[0][1]=cols;
    cm[0][2]=nonZ;
    int k=1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(sm[i][j]!=0)
            {
                cm[k][0]=i;
                cm[k][1]=j;
                cm[k][2]=sm[i][j];
                k++;
            }
        }
    }
    printf("compact matrix: \n");
    for(i=0;i<=nonZ;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",cm[i][j]);
        }
        printf("\n");
    }
}