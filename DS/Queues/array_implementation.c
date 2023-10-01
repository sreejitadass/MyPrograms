#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void Enqueue(int x)
{
    if(rear==N-1)
        printf("\nOverflow");       //queue is full
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;              //queue is empty
    }
    else
    {
        rear++;
        queue[rear]=x;              //queue contains some elements
    }
}

void Dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else if(front==rear)        //queue has 1 element
        front=rear=-1;
    else
    {
        printf("\nDequeued element is: %d",queue[front]);
        front++;
    }
}

void Peek()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
        printf("\nData at front: %d",queue[front]);
}

void Display()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue: \n");
        for(int i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    } 
    printf("\n");   
}

int main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(7);
    Peek();
    Display();
    Dequeue();
    Dequeue();
    Peek();
    Display();
    return 0;
}


