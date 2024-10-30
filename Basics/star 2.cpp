#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the no. of Rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(k=row;k>=i;k--)
	
	{
		printf(" ");
	}
		for(j=1;j<=i;++j)
	
	{
		printf(" * ");
	}
	printf("\n");
	}
	
	for(i=1;i<=row-1;i++)
	{
		for(k=1;k>=row-1;k++)
	
	{
		printf(" ");
	}
		for(j=row-1;j>=1;--j)
	
	{
		printf(" * ");
	}
	printf("\n");
	}
	
getch();
}
