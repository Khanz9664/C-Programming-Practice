#include<stdio.h>
void hanoi(int n, char s, char h, char d)
{
   if(n==0) return;
   hanoi(n-1,s,d,h);//here we are changing d into h and h into d
   printf("%c ---> %c\n",s,d);
   hanoi(n-1,h,s,d);//here we are changing h into s and s into h
   return;
}
int main()
{
    int n;
    printf("enter the no of disks: ");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}
//        |         |         |
//       -|-        |         |
//      --|--       |         |
//     ---|---      |         |
//
//we have to move these disks from tower A to C with
//the help of tower B
//we cant move two disks in one move 
//and we cant put larger disks on smaller disks
//no of steps = (2 power n)-1
//