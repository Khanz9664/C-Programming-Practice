#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the first no.:");
	scanf("%d" ,&a);
	printf("Enter the second no.:");
	scanf("%d" ,&b);
	c=a+b;
	printf("Sum of %d and %d is : %d \n" ,a,b,c);
	d=a-b;
	printf("Difference between %d and %d is : %d \n" ,a,b,d);
	e=a*b;
	printf("Product of %d and %d is : %d \n" ,a,b,e);
	getch();
}
