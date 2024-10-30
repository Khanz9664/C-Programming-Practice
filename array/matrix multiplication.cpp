#include <stdio.h>
#include <conio.h>
int main()
{
	int r,c,i,j,n;;
	printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no. of columns: ");
	scanf("%d",&c);
	int x[r][c],mul[r][c];
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
			mul[i][j]=0;
			for(int k=0;k<c;k++)
			{
				mul[i][j] = mul[i][j] + x[i][k]*y[k][j];
			}
		}	
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",mul[i][j]);
		}
		printf(" \n");
	}
	
}
