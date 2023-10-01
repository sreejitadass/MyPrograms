#include<stdio.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void Enqueue(int x)
{
    if(front==-1 && rear==-1)       //empty condition
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front)      //overflow condition
        printf("\nOverflow");
    else                            //when some elements are present
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void Dequeue()
{
    if(front==-1 && rear==-1)           //underflow
        printf("\nUnderflow");
    else if(front==rear)
        front=rear=-1;                  //queue has 1 element
    else                                //queue has some elements
    {
        printf("\nDequeued element: %d",queue[front]);
        front=(front+1)%N;
    }
}

void Peek()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
        printf("\nElement at front: %d",queue[front]);
}
void Display()
{
    int i=front;
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue:    ");
        while (i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d ",queue[rear]);
    
    }
}

int main()
{
    Enqueue(2);
    Enqueue(-1);
    Enqueue(5);
    Enqueue(7);
    Enqueue(10);
    Display();
    Dequeue();
    Peek();
    Enqueue(0);
    Enqueue(7);
    Enqueue(11);
}
