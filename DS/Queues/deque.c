#include<stdio.h>
#define N 5
int deque[N];
int front=-1;
int rear=-1;

void EnqueueFront(int x)
{
    if(front==(rear+1)%N)               //queue is full
        printf("\nOverflow");
    else if(front==-1 && rear==-1)      //queue is empty     
    {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0)                 //front is at beginning
    {
        front=N-1;
        deque[front]=x;
    }
    else                                //front is at any other position
    {
        front--;
        deque[front]=x;
    }
}

void EnqueueRear(int y)
{
     if(front==(rear+1)%N)               //queue is full
        printf("\nOverflow");
    else if(front==-1 && rear==-1)      //queue is empty     
    {
        front=rear=0;
        deque[rear]=y;
    }
    else if(rear==N-1)                  //rear is at end  
    {
        rear=0;
        deque[rear]=y;
    }  
    else                                //rear is at other position
    {
        rear++;
        deque[rear]=y;
    }
}

void DequeueFront()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else if(front==N-1)
    {
        front=0;
    }
    else
    {
        printf("\nDequeued element is: %d",deque[front]);
        front++;
    }
}

void DequeueRear()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else if(rear==0)
    {
        rear=N-1;
    }
    else
    {
        printf("\nDequeued element is: %d",deque[rear]);
        rear--;    
    }
}

void getFront()
{
    printf("\nElement at front is: %d",deque[front]);
}

void getRear()
{
    printf("\nElement at rear is: %d",deque[rear]);
}

void Display()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue: ");
        int i=front;
        while(i!=rear)
        {
            printf("%d ",deque[i]);
            i=(i+1)%N;
        }
    }
}

int main()
{
    EnqueueFront(2);
    EnqueueFront(5);
    EnqueueRear(-1);
    EnqueueRear(0);
    EnqueueFront(7);
    Display();
    EnqueueFront(4);
    Display();
    DequeueFront();
    DequeueRear();
    DequeueFront();
    getFront();
    getRear();

    return 0;
}