#include <stdio.h>
#include <conio.h>
int main()
{
	int size,y,i,j,n,temp=0;
	printf("Enter the size of matrix: ");
	scanf("%d",&size);
	int x[size];
	printf("Enter the number of elements to be enterd in array[10]: ");
	scanf("%d",&n);
	printf("Elements to be enterd in X[%d]: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf(" \n");
	printf("X: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
	
	printf(" \n");
	//delete an element in array
	printf("Element to be deleted: ");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(x[i]==y)
		{
			temp=1;
			break;  
		}
	}
	
	if(temp==1)
	{
	for(j=i;j<n;j++)
		{
			x[j]=x[j+1];
		}
	}
	n=n-1;
	
	
	printf(" \n");
	printf("X: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
	
	printf(" \n");
	
	//insertion for sorted array
	int flag=0;
	printf("Element to be inserted: ");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(x[i]>=y)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
	n=n+1;
	for(j=n-1;j>=i;j--)
		{
			x[j]=x[j-1];
		}
	x[i]=y;
	}
	else
	{
		n=n+1;
		x[n-1]=y;
	}
		
	printf("X: ");	
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
getch();
}
