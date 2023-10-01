#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;

void Push(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void Pop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
        printf("\nUnderflow");
    else
    {
        printf("\nPopped element is: %d",top->data);
        top=top->link;
        free(temp);
    }
}

void Peek()
{
    if(top==NULL)
        printf("\nEmpty Stack");
    else
    {
        printf("\nTopmost element is: %d",top->data);
    }
}

void Display()
{
    struct node *temp=top;
    if(top==NULL)
        printf("\nEmpty stack");
    else
    {
        printf("\nStack: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}

int main()
{
    Push(2);
    Push(3);
    Push(8);
    Display();
    Peek();
    Pop();
    Push(12);
    Peek();
    Pop();
    Pop();
    Display();

    return 0;
}