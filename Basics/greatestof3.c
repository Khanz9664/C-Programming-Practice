#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("enter first no.: ");
    scanf("%d", &a);
    printf("enter 2nd no.: ");
    scanf("%d", &b);
    printf("enter 3rd no.: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else
    {
        if (b > a && b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    return 0;
}