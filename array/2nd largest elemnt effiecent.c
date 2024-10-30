#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={1,4,5,8,8};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int max=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            //if condition is true
            //previous value of max stored in max2
            max2=max;
            max=arr[i];
        }
        if(arr[i]!=max && arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    printf("\n2nd largest element: %d",max2);
    return 0;
}