#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float s1,s2,s3,s4,s5;
	
	printf("Enter the marks of 1 subjects:");
	scanf("%f",&s1);
	printf("Enter the marks of 2 subjects:");
	scanf("%f",&s2);
	printf("Enter the marks of 3 subjects:");
	scanf("%f",&s3);
	printf("Enter the marks of 4 subjects:");
	scanf("%f",&s4);
	printf("Enter the marks of 5 subjects:");
	scanf("%f",&s5);
	
	
	printf("Total marks=%f \n",s1+s2+s3+s4+s5);
	printf("Average marks=%f \n",(s1+s2+s3+s4+s5)/5);
	printf("Percentage =%f",((s1+s2+s3+s4+s5)/500)*100);
	getch();
}
