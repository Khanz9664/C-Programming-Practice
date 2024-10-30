#include <stdio.h>
#include <conio.h>
int main()
{
	int i;
	printf("Enter the number: ");
	scanf("%d",&i);
	if(i%2==0)
	printf("%d is even",i);
	else
	printf("%d is odd",i);
	getch();
}
