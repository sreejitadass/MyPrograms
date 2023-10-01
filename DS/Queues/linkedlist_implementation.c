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
        front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void Dequeue()
{
    struct node *temp=NULL;
    if(front==NULL && rear==NULL)
        printf("\nEmpty queue");
    else
    {
        temp=front;
        printf("\nDequeued element is: %d",front->data);
        front=front->next;
        free(temp);
    }
}

void Peek()
{
    if(front==NULL && rear==NULL)
        printf("\nQueue is empty");
    else
        printf("\nFront element: %d",front->data);
}

void Display()
{
    struct node *temp=front;
    if(front==NULL && rear==NULL)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    Enqueue(5);
    Enqueue(10);
    Enqueue(-3);
    Display();
    Peek();
    Dequeue();
    Dequeue();
    Peek();
    Dequeue();
    Display();
}