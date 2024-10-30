/*
    count the number of tripets whose
    sum is equal to the given value of x
*/
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    int x=13;
    int count=0;
    for(int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            for(int k=j+1;k<10;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    printf("\n(%d , %d , %d) ",arr[i],arr[j],arr[k]);
                    count++;
                }
            }

        }
    }
    printf("\n%d pairs",count);
    return 0;
}