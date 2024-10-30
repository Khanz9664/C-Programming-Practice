#include <stdio.h>
int main()
{
	int size,i,search,low,high,mid,found;
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
    low=0;
    high=size-1;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(x[mid]==search)
			{
				found=1;
				break;
			}
			if(search>x[mid])
			{
				low=mid+1;
			}
			if(search<x[mid])
			{
				high=mid-1;
			}
		}
		if(found==1)
		{
			printf("The element %d is found at position: %d",search,mid);
		}
		else
		{
			printf("Element %d not found",search);
		}
}