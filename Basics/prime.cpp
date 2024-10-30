#include <stdio.h>
#include <conio.h>
int main()
{
	int n,o=0,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
		o++;
		break;
	}
}
	if(o==0 && n!=1)
	{
		printf("%d is prime",n);
	}
	else
	{
	
	printf("%d is not prime",n);
}
	printf(" \n");
	return main();
	getch();
}
