#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={7,4,5,6,2};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    //first we calculate largest element
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
       if(arr[i]>max)
       {
            max=arr[i];
       }
    }
    int max2=INT_MIN; //INT_MIN puts the minimum value avaliable in c into the variable
    //here we are calculating 2nd largest element
    for(int i=0;i<5;i++)
    {
        //if(arr[i]<max && arr[i]>max2)
        if(arr[i]!=max && arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    printf("\n2nd largest element: %d",max2);
    return 0;
}