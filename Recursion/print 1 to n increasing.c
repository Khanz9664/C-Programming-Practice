#include <stdio.h>
void display(int x, int n)
{
        if(x>n) return;
        else
        {
            printf("%d ",x);
            display(x+1,n);
            return;
        }
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    display(1,n);
    return 0;
}