/*
    find the unique element in array given that
    eac element is repeating except one
*/
#include<stdio.h>
#include<stdbool.h>//for including boolean data type
int main()
{
    int arr[11]={1,2,3,4,5,6,5,4,3,2,1};
    for(int i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    int count;
    for(int i=0;i<11;i++)
    {
        count=0;
        for(int j=i+1;j<11;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("\n%d ",arr[i]);
            break;
        }
    }
    return 0;
}