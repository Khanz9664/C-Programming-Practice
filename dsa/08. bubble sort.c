#include<stdio.h>

int main()
{
    int i,j;
    int size=7;
    int a[7]={4,1,6,9,2,3,7};
    printf("\narray: ");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nbubble sort: \n");
    for (i = 0; i < size; i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    
}