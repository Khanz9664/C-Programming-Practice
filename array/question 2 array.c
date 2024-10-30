/*
    COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRAY 
    GREATER THEN A GIVEN NUMBRR X
*/
#include <stdio.h>
int main()
{
    int arr[5]={7,4,5,6,2};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int n=3;
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>n)
        {
            count++;
        } 
    }
    printf("\nNo of elements greste than %d : %d",n,count);
    return 0;
}