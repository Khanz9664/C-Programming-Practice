#include<stdio.h>

int main()
{
    int i,j,k;
    int size=7;
    int a[7]={4,1,6,9,2,3,7};
    printf("\narray: ");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nselection sort: \n");
    for (i = 0; i < size; i++)
    {
        int temp;
        int minindx=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[minindx])
            {
                minindx=j;
            }
        }
        if(minindx!=i)
        {
            temp=a[i];
            a[i]=a[minindx];
            a[minindx]=temp;
        }
    }
    
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    
}