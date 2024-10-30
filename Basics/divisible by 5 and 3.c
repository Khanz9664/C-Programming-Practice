#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("divisible by 5 and 3");
    }
    else
    {
        if (x % 3 == 0)
        {
            printf("only divisible by 3");
        }
        else
        {
            if (x % 5 == 0)
            {
                printf("only divisible by 5");
            }
            else
            {
                printf("not divisible by 3 and 5");
            }
        }
    }
    return 0;
}