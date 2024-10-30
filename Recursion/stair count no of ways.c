#include<stdio.h>
int stair(int n)
{
    // if(n==1) return 1;
    // if(n==2) return 2;
    if(n<=2) return n;
    int totalways=stair(n-1)+stair(n-2); 
    return totalways;
}
int main()
{
    int n;
    printf("enter the no of stairs: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("number of ways: %d",ways);
    return 0;
}


//stair path 
//                          4-->    _____
//                     3-->    ____|
//                2-->    ____|
//           1-->    ____|
//  ground-->   ____|
//    
// we can take 1 or 2 stairs in one step
// we have to calculate number of ways to reach the top
// it works same as fibonacci series 
// no of stairs = nth term of fibonacci series