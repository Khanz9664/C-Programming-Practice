#include <stdio.h>
//1 1 1
//2 1 1 1 2 1 1 1 2
//3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3
int PreInPost(int n)
{
    if(n==0) return;
    printf("%d ",n);
    PreInPost(n-1);
    printf("%d ",n);
    PreInPost(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n;
    printf("enter num: ");
    scanf("%d", &n);
    PreInPost(n);
    return 0;
}
/*
    it works on concept of Pre In Post order
    
*/