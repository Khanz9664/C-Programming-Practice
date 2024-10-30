#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("largest = %d",max);
    return 0;
}