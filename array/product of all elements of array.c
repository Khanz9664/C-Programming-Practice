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
    int product=1;
    for(int i=0;i<size;i++)
    {
        product *= arr[i];
    }
    printf("product = %d",product);
    return 0;
}