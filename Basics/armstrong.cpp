#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num;
	printf("enter the number: ");
	scanf("%d",&n);
	num=n;
	int r;
	int s=0;
	while(num>0)
	{
		r=num%10;
		s=s+(r*r*r);
		num=num/10;
	}
	if(s==n)
		printf("number is armstrong");
	else
		printf("number is not armstrong");
	printf("\n");
	return main();
}
