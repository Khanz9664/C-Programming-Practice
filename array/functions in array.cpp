#include <stdio.h>
#include <conio.h>

int LargestSmallest(int s[], int size)
{
		int largest=s[0];
	int smallest=s[0];
	for(int i=0;i<size;i++)
	{
		if(s[i]<smallest)
		{
			smallest=s[i];
		}
		if(s[i]>largest)
		{
			largest=s[i];
		}
	}
		printf("Smallest element:%d \n",smallest);
		printf("Largest element:%d \n",largest);
}

int Search(int s[], int size)
{
	int srch,found,i;
	printf("Element to be searched: ");
		scanf("%d",&srch);
		found=0;
	for(i=0;i<size;i++)
	{
		if(s[i]==srch)
		{
			found=1;
			break;
		}
	}
			if(found==1)
			{
					printf("Element %d found at position : %d \n",srch,i+1);
			}
			else
			{
					printf("Element not found.\n");
			}
	
}

int Reverse(int s[], int size)
{
	printf("Reverse of array is: ");
	for(int i=size-1;i>=0;i--)
	{
		printf("%d ",s[i]);
	}
}

int main()
{
	int size;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int s[size];
	printf("Enter the elements of s: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&s[i]);
	}
	printf(" \n");
	printf("Array S: ");	
	for(int i=0;i<size;i++)	
	{
		printf("%d ",s[i]);
	}
	
	printf(" \n");
	
	LargestSmallest(s,size);
	
	printf(" \n");
	
	Search(s,size);
	
	printf(" \n");
	
	Reverse(s,size);
	
	printf(" \n");
	
	
}
