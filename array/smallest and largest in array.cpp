#include <stdio.h>
#include <conio.h>
int main()
{
	int x[5]={11,12,33,32,23},i;
			printf("Elements of array are: ");
	for(i=0;i<5;i++)	
	{
		printf("%d ",x[i]);
	}
			printf(" \n ");
	int smallest=x[0];
	int largest=x[0];
	for(i=0;i<5;i++)
	{
		if(x[i]<smallest)
		{
			smallest=x[i];
		}
		if(x[i]>largest)
		{
			largest=x[i];
		}
	}
	printf("Smallest element in array: %d \n ",smallest);
	printf("Largest element in array: %d ",largest);
getch();
}
