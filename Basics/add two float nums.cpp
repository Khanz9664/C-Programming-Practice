#include <stdio.h>
#include <conio.h>
int main()
{
	float a,b,c;
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("Enter the second number: ");
	scanf("%f",&b);
	c=a+b;
	printf("Sum of %f and %f = %f",a,b,c);
	getch();
}
