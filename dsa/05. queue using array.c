#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int queue[SIZE];
int front = -1;
int rear = -1;


void enqueue(int item){
    if(rear == SIZE-1){
        printf("Can't enqueue queue is full\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        
        rear = rear + 1;
        queue[rear] = item;
        printf("enqueued %d\n",item);
   }
}


void dequeue(){
    if(front == -1){
        printf("Can't dequeue queue is empty\n");
    }
    else{
        printf("dequeued : %d\n", queue[front]);
        front = front + 1;
        
        
        if(front > rear){
	        front = -1;
	        rear = -1;
        }
   }
}

void frontc(int front)
{
    if(front!=-1)
    {
        printf("%d",queue[front]);
    }
    else
    {
        printf("queue empty");
    }


}


void queuelength(){
    int x,y;
    x=front;
    y=rear;
    printf("\n length=%d \n",y-x+1);
}


int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    
    queuelength();

    dequeue();
    dequeue();

    queuelength();
   
    frontc(front);
    return 0;
}