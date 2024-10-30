#include <stdio.h>
void display(int n)
{
    if(n==0) return;
    printf("%d ",n);
    display(n-1);
    return;
}
void displayy(int n)
{
    if(n==0) return;
    displayy(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n;
    printf("\nenter the value of n: ");
    scanf("%d",&n);
    printf("\nn to 1: \n");
    display(n);
    printf("\n1 to n: \n");
    displayy(n);
    return 0;
}