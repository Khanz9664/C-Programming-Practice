#include<stdio.h>
int fib (int n)
{
    if(n==1 || n==2) return 1;
    // int pre=fib(n-1);
    // int ppre=fib(n-2);
    // int curr=pre+ppre;
    //return curr;
    return fib(n-1)+fib(n-2); 
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int r=fib(n);
    printf("%dth term of fibonacci : %d",n,r);
    return 0;
}
// TREE DIAGRAM OF THIS CODE
//
//                          !---------------F(6)-----------------!
//                  !------F(5)------!                    !----F(4)----!
//       !---F(4)---!          !---F(3)---!        !----F(3)---!      F(2)
// !--F(3)--!      F(2)      F(2)      F(1)       F(2)       F(1)    
//F(2)     F(1)
// 
//
//WORKING:
//    FIB(1)----> 1
//    FIB(2)----> 1
//    "SO WE STOP AT FIB(1) OR FIB(2) AND RETURN 1 AS
//     THIS IS BASE CONDITION OF THIS RECURSIVE CALL"
//
//    FIB(3)=FIB(2)+FIB(1)----> 1+1 = 2
//    FIB(4)=FIB(3)+FIB(2)----> 2+1 = 3 
//    FIB(5)=FIB(4)+FIB(3)----> 3+2 = 5
//    FIB(6)=FIB(5)+FIB(4)----> 5+3 = 8 
//    AND IT GOES ON