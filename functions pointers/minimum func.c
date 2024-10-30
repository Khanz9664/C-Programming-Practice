#include <stdio.h>
int min(int x, int y)
{
    int min = x;
    if (x > y)
        min = y;
    return min;
}
int main()
{
    int x, y, z;
    printf("enter the first no.: ");
    scanf("%d", &x);
    printf("enter the second no.:");
    scanf("%d", &y);
    z = min(x, y);
    printf("minimum: %d", z);
    return 0;
}