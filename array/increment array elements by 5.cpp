#include <stdio.h>
#include <conio.h>
int main()
{
	int x[5]={1,2,3,4,5},i;
		printf("Elements of array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);	
	}
		printf(" \n ");
		printf("Elements of array after incrementing by 5: ");
	for(i=0;i<5;i++)
	{
		x[i]=x[i]+5;
		printf("%d ",x[i]);
	}
getch();
}
