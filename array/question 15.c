/*
Given an array integers change the value of all odd indexed elements
to its second multiple
and increment all even indexed elemntds by 10 
*/
#include <stdio.h>
int main()
{
    int arr[5]={3,4,5,6,2};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            arr[i] += 10;
        }
        if(i%2!=0)
        {
            arr[i] *= 2;
        }
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}