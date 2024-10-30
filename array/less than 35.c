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
    printf("\nMarks less than 35:\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]<35)
        {
            printf("\n rollno: %d has %d marks ",i+1,arr[i]);
        }
    }
    return 0;
}