#include <stdio.h>
int PreInPost(int n)
{
    if(n==0) return;
    printf("Pre %d\n",n);
    PreInPost(n-1);
    printf("In %d\n",n);
    PreInPost(n-1);
    printf("Post %d\n",n);
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
    input = 3
    output:-
        Pre 3
        Pre 2
        Pre 1
        In 1
        Post 1
        In 2
        Pre 1
        In 1
        Post 1
        Post 2
        In 3
        Pre 2
        Pre 1
        In 1
        Post 1
        In 2
        Pre 1
        In 1
        Post 1
        Post 2
        Post 3
*/