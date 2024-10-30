#include <stdio.h>
#include <conio.h>
int main()
{
	char op;
	float first, second;
	printf("\t \t \t :CALCULATOR: \n");
		printf("\n ");
	printf("\t Enter an operator ( + , - , / , * ): ");
	scanf("%c" , &op);
		printf("\n ");
	printf("\t Enter the first operand: ");
	scanf("%f" , &first);
		printf("\n ");
	printf("\t Enter the second operand: ");
	scanf("%f" , &second);
		printf("\n ");
	switch (op)
	{
		case '+':
			printf("\t %f+%f=%f",first,second,first+second);
			break;
		case '-':
			printf("\t %f-%f=%f",first,second,first-second);
			break;
		case '/':
			printf("\t %f/%f=%f",first,second,first/second);
			break;
		case '*':
			printf("\t %f*%f=%f",first,second,first*second);
			break;
		default:
			printf("\t Error! The operator is incorrect");
	}
	printf("\n ");
	printf("\n ");
	getch();
}
