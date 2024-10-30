/*
    wap to reverse array without using extra array
    arr[4]={1,2,3,4}
    arr[4]={4,3,2,1}
*/
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    // int x=0;
    // int y=4;
    // while(x<y)
    // {
    //     int temp;
    //     temp=arr[x];
    //     arr[x]=arr[y];
    //     arr[y]=temp;
    //     x++;
    //     y--;
    // }
    for(int i=0,j=4;i<j;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}