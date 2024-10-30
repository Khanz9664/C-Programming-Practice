/*
    if an array contain n elements ch4ck if the
    given array is plaindrome or not
*/
#include <stdio.h>
int main()
{
    int arr[11]={1,2,3,4,5,6,5,4,3,2,1};
    for(int i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    int flag=0;
    for(int i=0,j=10;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=1;
        }
    }
    if(flag==1) printf("\nnot a plaindrome");
    else printf("\nplaindrome");
    return 0;
}