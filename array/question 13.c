/*
    find the duplicate element in array 
    note: only one element is duplicate
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
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
             printf("\n%d ",arr[i]);
             break;
            }
        }
    }
    return 0;
}