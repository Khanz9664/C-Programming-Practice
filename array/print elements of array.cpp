#include <stdio.h>
#include <conio.h>
int main()
{
	int size,i,j;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int x[size];
		printf("Enter the elements of x: \n ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
		printf(" \n ");
		
	for(i=0;i<size;i++)	
	{
		printf("%d ",x[i]);
	}
getch();
}
