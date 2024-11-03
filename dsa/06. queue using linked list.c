#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* rear=NULL;
struct node* front=NULL;

struct node* createnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void enqueue(int data)
{
    printf("\nenqueued %d",data);
    if(front == NULL)
    {
        struct node* temp=createnode(data);
        front=temp;
        rear=temp;
        return;
    }
    struct node* temp=createnode(data);
    rear->next=temp;
    rear=temp;
    return;
}

void dequeue()
{
    int element;
    struct node* temp;
    if(front==NULL)
    {
        printf("\nqueue is empty");
        return;
    }
    element=front->data;
    temp=front;
    front=front->next;
    printf("\ndequeued %d",element);
    free(temp);
    return;
}

int main()
{
    dequeue();

    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    return 0;
}