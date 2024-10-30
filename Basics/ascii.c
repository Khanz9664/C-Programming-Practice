#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    // char alpha;
    // printf("enter a character: ");
    // scanf("%c",&alpha);
    // printf("%c = %d",alpha,alpha);
    for(i=65;i<=90;i++)
    {
        printf("\n %c = %d",i,i);
    }
    for(i=97;i<=122;i++)
    {
        printf("\n %c --> %d",i,i);
    }
    return 0;
}