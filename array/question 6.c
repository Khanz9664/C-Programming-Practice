/*
    wap to copy contents of one array
    into another array in reverse order
*/
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    int carr[5];
    for(int i=0;i<5;i++)
    {
        carr[i]=arr[4-i]; //no of elements is 4
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",carr[i]);
    }
}