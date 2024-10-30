#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, a = 1, b = 3, c = 100;
    printf("enter the number of terms: ");
    scanf("%d", &n);
     // gp:- 1,2,4,8,16,32,.......,n
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    printf("\n");
    // 3,12,48,......
    for (i = 1; i <= n; i++)
    {
        printf("%d ", b);
        b = b * 4;
    }
    printf("\n");
    // 100,97,94,91,......(only positive)
    for (i = 1; i <= n; i++)
    {
        if (c >= 0)
        {
            printf("%d ", c);
            c = c - 3;
        }
    }
    return 0;
}