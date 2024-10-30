/*
    find the total number of pairs in the array
    whose sum is equal to the given vale x
*/
#include <stdio.h>
int main()
{
    int arr[5]={7,4,5,6,2};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int x=9;
    int count=0;
    for(int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("\n(%d , %d) ",arr[i],arr[j]);
                count++;
            }

        }
    }
        printf("\n%d pairs",count);
    return 0;
}