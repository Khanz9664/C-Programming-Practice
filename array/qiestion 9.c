/*
rotate the given array by k steps,where k is non negative
k can be greater than n as  well n is the sixe of array
*/
#include <stdio.h>
int reverse(int arr[],int a,int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}
int main()
{
    int n=11;
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    int k=9;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if(k>n) k=k%n;
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//
//ALGORITHM 
// arr[7]=[1|2|3|4|5|6|7]
//k=3    {if (k>n) k=k%10}
//reverse 0 to (n-1) [7|6|5|4|3|2|1]
//reverse 0 to (k-1) (first 3 elements) [5|6|7|4|3|2|1]
//reverse k to (n-1) [5|6|7|1|2|3|4]
//now we have array with k rotations