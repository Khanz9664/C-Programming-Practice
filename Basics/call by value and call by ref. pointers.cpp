#include <stdio.h>
#include <conio.h>

//CALL BY VALUE
void add(int x, int y)
{
	int z;
	z=x+y;
	printf("%d + %d = %d \n",x,y,z);
}


//CALL BY REFERENCE
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int x=10;
	int y=20;
	printf("x = %d and y = %d \n",x,y);
	add(x,y);
	swap(&x,&y);
	printf("after swapping x = %d and y = %d",x,y);
	return 0;
}
