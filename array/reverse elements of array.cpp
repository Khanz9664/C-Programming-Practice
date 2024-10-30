#include <stdio.h>
#include <conio.h>
int main()
{
	int size,i;
	printf("Enter the size of an array: ");
	scanf("%d",&size);
	//using value of size as an array size of array 'x'
	int x[size];
	printf("Enter elements of an array: \n");
	//using for loop for taking elements of array from user and storing them in 'x[size]'
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Elements of an array are:");
	//using for loop to print the elements of array
	for(i=0;i<size;i++)
	{
		printf("%d ",x[i]);
	}
	printf(" \n");
	printf("Reverse of an array is: ");
	//using for loop to reverse the order of elements in array 'x[size]'
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",x[i]);
	}
getch();	
}

