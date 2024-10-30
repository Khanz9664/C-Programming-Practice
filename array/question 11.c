/*
    array containing elements from 1-100 except one 
    element is missing find the missing element
*/
#include<stdio.h>
int main()
{
    // n=20 ---> 1 to 20
    int arr[19]={1,2,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,20};
    int x=1;
    for(int i=0;i<18;i++)
    {
        if(arr[i]!=x)
        {
            printf("element %d is missing at index %d",arr[i-1]+1,i);
            break;
        }
        x+=1;
    }
    return 0;
}
//
//another approach is we can sum all all the given elements from 1 to n
//and take the actual sum of n elements n(n+1)/2
//subtract the given element sum to sum of 1 to n terms 
//
// int sum=0;
// for (i=0;i<n-2;i++)
//      sum += arr[i];
// int sum2;
// sum2=(n*(n+1))/2;
// element missing = sum2-sum;