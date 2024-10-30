#include<stdio.h>
#include<conio.h>
int main()
{
	int x[10]={1,2,1,3,4,3,2,1,1,4},i,n,temp=0;
	printf("X: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",x[i]);
	}
	

	printf(" \n");
	printf(" \n");
	
	printf("Frequency of no. to be checked: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(x[i]==n)
		{
			temp=temp+1;
		}
	}
	printf("Frequency: %d",temp);
	

	getch();
}
