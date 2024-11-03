#include<stdio.h>
int main()
{
    int size=5;
    int a[5]={9,8,7,6,5};
    int i,temp,j;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }


    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
}