#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void Enqueue(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void Dequeue()
{
    struct node *temp=front;
    if(front==NULL && rear==NULL)
        printf("\nUnderflow");
    else if(front==rear)
    {
        front=rear=NULL;
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void Peek()
{
    if(front==NULL && rear==NULL)
        printf("\nEmpty queue");   
    else
        printf("\nElement at front: %d",front->data); 
}

void Display()
{
    struct node *temp=front;
    if(front==NULL && rear==NULL)
        printf("\nUnderflow");
    else
    {
        printf("\nQueue: \n");
        while(temp->next!=front)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}

int main()
{
    Enqueue(2);
    Enqueue(-5);
    Enqueue(6);
    Peek();
    Display();
    Dequeue();
    Dequeue();
    Peek();
    Display();

    return 0;
}