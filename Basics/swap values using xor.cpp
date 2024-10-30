#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int b=20;
	/*swap values using xor */
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d \n",a);
	printf("b=%d",b);
}
