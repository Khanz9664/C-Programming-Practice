#include<stdio.h>
#include<conio.h>
int main()
{
    int size,temp,start,end,i;
    printf("enter the size f an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements of array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    start=0;
    end=size-1;
    for(i=size-1;i>=0;i--)
    {
        if(start<end)
        {
            temp=arr[i];
            arr[i]=arr[start];
            arr[start]=temp;
            start++;
            end--;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}