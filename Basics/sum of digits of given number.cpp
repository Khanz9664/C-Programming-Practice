#include <stdio.h>
#include <conio.h>
int main()
{
	int x,r,sum=0;
	printf("Enter the number: ");
	scanf("%d",&x);
		while(x>0)
		{
			r=x%10;
			sum=sum+r;
			x=x/10;
		}
	printf("sum of digits of given number is: %d\n",sum);
		
	getch();
}
