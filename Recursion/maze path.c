#include <stdio.h>
int path(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        rightways += path(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        downways += path(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightways += path(cr, cc + 1, er, ec);
        downways += path(cr + 1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int m, n;
    printf("enter no of rows of the maze: ");
    scanf("%d", &m);
    printf("enter no of cols of the maze:");
    scanf("%d", &n);
    int ways = path(1, 1, m, n);
    printf("no of paths %d x %d : %d", m, n, ways);
    return 0;
}
/*
        ______________________________
        |       |          |          |
        |   A   |          |          |
        |_______|__________|__________|
        |       |          |          |
        |       |          |          |
        |_______|__________|__________|
        |       |          |          |
        |       |          |   B      |
        |_______|__________|__________|

person A has to reach person B he has to take path
in a way
either he can go right or down
he cant go left , up or diagonally
we have to fnd the number of paths through which
person A can reach to person B
we have to find it for NXM maze
in this 3X3 maze
paths: 6
    DDRR
    DRDR
    DRRD
    RRDD
    RDRD
    RDDR
R=right and D=down
*/
