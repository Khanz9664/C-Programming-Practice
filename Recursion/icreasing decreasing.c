#include <stdio.h>
void display(int n)
{
    if(n==0) return;
    printf("%d \n",n);
    display(n-1);
    printf("%d \n",n);
    return;
}
int main()
{
    int n;
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    printf("n to 1: \n");
    display(n);
    return 0;
}