#include <stdio.h>
int path(int m, int n)
{
    int leftways = 0;
    int upways = 0;
    if (m == 1 && n == 1)
        return 1;
    if (m > 1 && n > 1)
    {
        leftways += path(m - 1, n);
        upways += path(m, n - 1);
    }
    else
    {
        if (m > 1)
        {
            leftways += path(m - 1, n);
        }
        if (n > 1)
        {
            upways += path(m, n - 1);
        }
    }
    int totalways = leftways + upways;
    return totalways;
}
int main()
{
    int m, n;
    printf("enter no of rows of the maze: ");
    scanf("%d", &m);
    printf("enter no of cols of the maze:");
    scanf("%d", &n);
    int ways = path(m, n);
    printf("no of paths %d x %d : %d", m, n, ways);
    return 0;
}

/*
    in this method we use botton up approach
    we go from destination to source
    it becomes much more efficient
*/