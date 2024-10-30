#include <stdio.h>
#include <conio.h>
int main()
{
	int size,i,search,found;
		printf("Enter the size of an array:");
		scanf("%d",&size);
	int x[size];
			printf("Enter the elements of x: \n");
	
		for(i=0;i<size;i++)
			{
				scanf("%d",&x[i]);
			}
	printf("Enter the element of an array to be searched: ");
	scanf("%d",&search);
		for(i=0;i<size;i++)
		{
			if(x[i]==search)
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			printf("The element %d is found at position: %d",search,i+1);
		}
		else
		{
			printf("Element %d not found",search);
		}
	getch();
}
