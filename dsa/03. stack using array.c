#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top==MAX-1)
    {
        printf("stack overflow \n");
        return;
    }
    stack[++top]=value;
}

int pop()
{
    if(top==-1)
    {
        printf("stack underflow \n");
        return -1;
    }
    return stack[top--];
}

void main()
{
    int choice, value;
    while(1)
    {
        printf("1:push\n2:pop\n3:exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter element: ");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                {
                    printf("popped element is: %d \n",value);
                }
                break;
            case 3:
                exit(0);
        }
    }
}