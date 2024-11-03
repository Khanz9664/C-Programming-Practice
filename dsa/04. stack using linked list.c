#include<stdint.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top;

struct node* newnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void push(int data)
{
    struct node* temp=newnode(data);
    printf("\npushed %d\n",data);
    if(top==NULL)
    {
        top=temp;
        return;
    }
    temp->next=top;
    top=temp;
    return;
}

void pop()
{
    int item;
    struct node* temp;
    if(top!=NULL)
    {
        item = top->data;
        temp = top;
        top=top->next;
        free(temp);
        printf("\npopped %d\n",item);
    }
    else
    {
        printf("\nstack underflow\n");
    }
}

int main()
{
    pop();

    push(10);
    push(20);
    push(30);
    push(40);

    pop();
    pop();
    pop();
    pop();
    return 0;
}