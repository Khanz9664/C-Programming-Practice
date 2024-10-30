#include <stdio.h>
#include <conio.h>
int main()
{
	int x[5]={11,33,44,66,10},i;
			printf("Elements of array are: ");
		for(i=0;i<5;i++)	
	{
		printf("%d ",x[i]);
	}
		printf(" \n ");
		printf("Elements of an array after decrementing by 10: ");
		for(i=0;i<5;i++)	
	{
		x[i]=x[i]-10;
		printf("%d ",x[i]);
	}
getch();
}
