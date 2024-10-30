#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,row;
	printf("Enter the no. of Rows: ");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i;++j)
	
	{
		printf(" %d " ,j);
	}
	printf("\n");
	}
	
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;++j)
	
	{
		printf(" %d " ,j);
	}
	printf("\n");
	}
	
	
getch();
}
