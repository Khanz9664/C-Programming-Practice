#include <stdio.h>
int main()
{
	int r,c,i,j,n;
	printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no. of columns: ");
	scanf("%d",&c);
	int x[r][c];
	printf("Enter matrix elementsof X: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	
	printf(" \n");
	printf(" \n");
	
	/*printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no. of columns: ");
	scanf("%d",&c);*/
	
	int y[r][c];
	printf("Enter matrix elements of Y: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	printf(" \n");
	printf(" \n");
	printf("Array X: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",x[i][j]);
		}
		printf(" \n");
	}
	
	printf(" \n");
	printf(" \n");
	printf("Array Y: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",y[i][j]);
		}
		printf(" \n");
	}
	
	printf(" \n");
	printf(" \n");
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=x[i][j]+y[i][j];
		}
	}
	
	printf(" \n");
	printf("Addition of Matrix X and Y: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",x[i][j]);
		}
		printf(" \n");
	}
	
	printf(" \n");
	
}
