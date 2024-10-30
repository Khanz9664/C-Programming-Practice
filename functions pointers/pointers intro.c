#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("a:%d b:%d\n",a,b);
    printf("a:%p b:%p\n",&a,&b);//prints the address
    //we can store this address using pointers
    int *x=&a;
    int *y=&b;
    //prints address of a & b stored in x and y
    printf("ad a: %p ad b: %p\n",x,y);
    //printing values of a & b using pointers *
    printf("a: %d b:%d\n",*x,*y);
    //changing values of a & b using pointers *x *y 
    *x=7;
    *y=9;
    printf("a:%d b:%d\n",a,b);
    return 0;
}