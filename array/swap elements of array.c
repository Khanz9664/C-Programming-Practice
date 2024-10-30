#include<stdio.h>
void fun(int a[])
{
    //using third variable
    // int temp = a[2];
    // a[2] = a[1];
    // a[1] = temp;
    // using xor operation
    a[2]=a[2]^a[1];
    a[1]=a[2]^a[1];
    a[2]=a[2]^a[1];
    return;
}
int main()
{
    int arr[5]={2,4,3,5,7};
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    fun(arr);
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}