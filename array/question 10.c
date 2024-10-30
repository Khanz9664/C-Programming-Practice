/*
reverse a part of array
arr[7]={1,2,3,4,5,6,7}
arr[7]={1,2,6,5,4,3,7}
*/
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    for(int i=1,j=3;i<j;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}