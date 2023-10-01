#include<stdio.h>
int front=-1;
int rear=-1;
int top=-1;

void Enqueue(int queue[],int x,int n)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(rear==n-1)
        printf("\nOverflow");
    else
    {
        rear++;
        queue[rear]=x;
    }
}

int Dequeue(int queue[])
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow");
    else if(front==rear)
    {
        int item=queue[front];
        front=rear=-1;
        return item;
    }
    else
    {
        int item=queue[front]; 
        front++;
        return item;
    }
}

void Push(int stack[],int y,int n)
{
    if(top==n-1)
        printf("\nOverflow");
    else
    {
        top++;
        stack[top]=y;
    }
}

int Pop(int stack[])
{
    if(top==-1)
        printf("\nUnderflow");
    else
    {
        int item1=stack[top];
        top--;
        return item1;
    }
}

void reverseQueue(int queue[],int stack[],int n)
{
    for(int i=0;i<n;i++)
    {
        int item=Dequeue(queue);
        Push(stack,item,n);
    }
    for(int i=top;i>=0;i--)
    {
        int item1=Pop(stack);
        Enqueue(queue,item1,n);
    }
}

void Display(int queue[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",queue[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the queue: ");
    scanf("%d",&n);
    int queue[n],stack[n];
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter the element %d: ",i+1);
        scanf("%d",&x);
        Enqueue(queue,x,n);    
    }

    printf("\nOriginal queue:  ");
    Display(queue,n);
    printf("\nReversed queue:  ");
    reverseQueue(queue,stack,n);
    Display(queue,n);
    
    return 0;
}