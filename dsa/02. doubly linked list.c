#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};


struct node* head=NULL;
struct node* end=NULL;


struct node* createnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

struct node* insertatend(int data)
{
    struct node* ptr;
    struct node* temp=createnode(data);
    printf("\n inserted element : %d \n",data);
    if(head==NULL)
    {
        head=temp;
        end=temp;
        temp->next=NULL;
        temp->prev=NULL;
        return temp;
    }
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    temp->next=NULL;
    end=temp;
    return temp;
}

struct node* insertatbegining(int data)
{
    struct node* temp=createnode(data);
    printf("\n inserted element : %d \n",data);
    if(head==NULL)
    {
        head=temp;
        end=temp;
        return temp;
    }
    head->prev=temp;
    temp->next=head;
    temp->prev=NULL;
    head=temp;
    return temp;
}

void deletehead()
{
    if(head==NULL)
    {
        printf("no data found");
        return;
    }
    struct node* temp;
    temp=head;
    head=head->next;
    printf("\n deleted element : %d \n",temp->data);
    free(temp);
    return;
}

void deleteend()
{
    if(end==NULL)
    {
        printf("no data found");
        return;
    }
    struct node* temp;
    temp=end;
    end=end->prev;
    printf("\n deleted element : %d \n",temp->data);
    free(temp);
    return;
}

void printlkhead(struct node* head)
{
    if(head==NULL)
    {
        printf("no data found");
        return;
    }
    while(head!=NULL)
    {
        printf("\n %d ",head->data);
        head=head->next;
    }
    return;
}

void printlkend(struct node* end)
{
    if(end==NULL)
    {
        printf("no data found");
        return;
    }
    while(end!=NULL)
    {
        printf("\n %d ",end->data);
        end=end->prev;
    }
    return;
}

int main()
{
    //inssert at the end of linkedlist
    insertatend(30);
    insertatend(40);
    insertatend(50);

    //insert at the begining of linkedlist
    insertatbegining(10);
    insertatbegining(20);

    //print linkedlist from head to end
    printlkhead(head);
    printf("\n");

    //print linkedlist from end to head
    printlkend(end);


    //delete head element
    deletehead();

    //delete end element
    deleteend();


    return 0;
}