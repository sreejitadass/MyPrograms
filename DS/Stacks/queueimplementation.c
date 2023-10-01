#include<stdio.h>

void Enqueue(int q[],int x,int n,int front,int rear)
{
    if(rear==n-1)
    {
        printf("Overflow");     
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        q[rear]=x;
    }
    else
    {
        rear++;
        q[rear]=x;
    }
}

void DequeueRear(int q[],int q1[],int n,int front1,int rear1,int front,int rear)
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else
    {
        int item=q[rear];
        Enqueue(q1,item,n,front1,rear1);
        rear--;
    }
}

void DequeueFront(int q1[],int front1,int rear1,int front)
{
    if(front1==-1 && rear1==-1)
        printf("\nUnderflow");
    else
    {
        front++;
    }
}

void Display(int q[],int front,int rear)
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\nStack:  ");
        for(int i=front;i<=rear;i++)
            printf("%d ",q[i]);
    } 
    printf("\n");  
}

int main()
{
    int front=-1;
    int rear=-1;
    int front1=-1;
    int rear1=-1;
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int q[n],q1[n];
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter element: ");
        scanf("%d",&x);
        Enqueue(q,x,n,front,rear);
    }
    Display(q,front,rear);
    DequeueFront(q,front1,rear1,front);


    return 0;
}

