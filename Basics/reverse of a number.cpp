#include<stdio.h>
#include<conio.h>
int main()
{
	int x,r,n;
	printf("enter the number: ");
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		n=n*10+r;
		x=x/10;
	}
	printf("reverse of the given number is: %d",n);
	getch();
}
