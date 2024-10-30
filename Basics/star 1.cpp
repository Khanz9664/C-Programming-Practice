#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the no. of Rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;++j)
	
	{
		printf(" * ");
	}
	printf("\n");
	}
	
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
	
getch();
}
