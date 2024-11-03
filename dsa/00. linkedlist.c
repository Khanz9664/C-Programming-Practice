#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* curr=NULL;
struct Node* head=NULL;
struct Node* createNode(int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

//insert data and link to prev node
struct Node* insertData(int data)
{
    struct Node* temp=createNode(data);
    struct Node* ptr;
    printf("\nInserted data: %d",data);
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
        curr=temp;
        return temp;
    }
    curr->next=temp;
    curr=temp;
    return temp;
}

void deleteNode()
{
    if(head==NULL)
    {
        printf("no data found");
        return;
    }
    struct Node* ptr = head;
    struct Node* prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
    }
    else
    {
        head = NULL;
    }
    printf("\nDeleted element: %d", ptr->data);
    free(ptr);
}

//traversal function 
void linkedlist_traversal(struct Node *ptr)
{
    printf("\n Traversal: ");
    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    insertData(20);
    insertData(10);
    insertData(30);



    linkedlist_traversal(head);

    deleteNode();
    deleteNode();

    return 0;
}