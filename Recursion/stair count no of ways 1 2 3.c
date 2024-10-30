#include<stdio.h>
int stair(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int totalways=stair(n-1)+stair(n-2)+stair(n-3); 
    return totalways;
}
int main()
{
    int n;
    printf("enter the no of stairs: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("number of ways: %d",ways);
    return 0;
}