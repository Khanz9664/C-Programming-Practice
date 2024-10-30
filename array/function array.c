#include<stdio.h>
void fun(int a[])
{
    a[2]=6;
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
//array is passed as reference
//call by reference
//we dont need to use pointers for that