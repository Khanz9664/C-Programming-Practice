#include <stdio.h>
#include <conio.h>
int main()
{
	int size,i,j,inc,dec,srch,found,sum=0;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	printf(" \n");
	int x[size];
		printf("Enter the elements of x: \n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
		printf(" \n");
		printf("Array X: ");	
	for(i=0;i<size;i++)	
	{
		printf("%d ",x[i]);
	}
	printf(" \n");
	printf(" \n");
	
	int largest=x[0];
	int smallest=x[0];
	for(i=0;i<size;i++)
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
		printf("Smallest element:%d \n",smallest);
		printf("Largest element:%d \n",largest);
		printf(" \n");
	
		printf("Element to be searched: ");
		scanf("%d",&srch);
		found=0;
	for(i=0;i<size;i++)
	{
		if(x[i]==srch)
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
	
		printf(" \n");
		printf("Number by which elements are to be incremented: \n");
		scanf("%d",&inc);
		printf("Array elements after incrementing by %d: \n",inc);
		
	for(i=0;i<size;i++)
	{
		x[i]=x[i]+inc;
		printf("%d ",x[i]);
	}
		printf(" \n");
		printf(" \n");
		
		printf("Number by which elements are to be decremented: \n");
		scanf("%d",&dec);
		printf("Array elements after decrementing by %d: \n",dec);
	for(i=0;i<size;i++)
	{
		x[i]=x[i]-dec;
		printf("%d ",x[i]);
	}
	printf(" \n");
	printf(" \n");
	
	printf("Reverse of array is: ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",x[i]);
	}
	printf(" \n");
	printf(" \n");
	
	printf("Sum of elements of array is: ");
	for(i=0;i<size;i++)
	{
		sum=sum+x[i];
	}
	printf("%d",sum);
	printf(" \n");
	printf(" \n");
	
	
	printf("START AGAIN");
	printf(" \n");
	printf(" \n");
	return main();
	getch();
}
