/*
    check if the element is present in an array or not
*/
#include<stdio.h>
#include<stdbool.h>//for including boolean data type
int main()
{
    int arr[10]={6,4,7,2,8,1,9,10,2,11};
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    int x=100;
    bool flag=false;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            flag=true;
            break;
        }
    }
    if(flag==true) printf("\n%d is present in array",x);
    else printf("\n%d is not present in array",x);
    return 0;
}