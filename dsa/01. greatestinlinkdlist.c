#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void largest_ele(struct Node *ptr)
{
    int largest=ptr->data;
    while (ptr!=NULL)
    {
        if(ptr->data>largest)
        {
            largest=ptr->data;
        }
        ptr = ptr->next;
    }
    printf("\n largest : %d ", largest);    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    //Allocate memory in heap (dynamic memory location)
    second =malloc(sizeof(struct Node));
    head = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth =malloc(sizeof(struct Node));
    

    //inserting data
    head->data = 10;
    second->data = 40;
    third->data = 30;
    fourth->data = 15;
    //linking nodes 
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    //finding largest 
    largest_ele(head);
    return 0;
}