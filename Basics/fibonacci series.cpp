#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,first,second,nextterm=first+second;
	printf("enter the nth term: ");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		printf(" %d ",nextterm);
		first=second;
		second=nextterm;
		nextterm=first+second;
	}

	return 0;
}
