/*
    find the differnce between 
    the sum of elements at even indexes
    to the sum of elements at odd indexes
*/
#include <stdio.h>
int main()
{
    int arr[5]={7,4,5,6,2};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int sumEven=0;
    int sumOdd=0;
    int diff;
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    diff = sumEven - sumOdd;
    printf("\nsum even indexes  %d - sum odd indexes  %d : %d",sumEven,sumOdd,diff);
    return 0;
}