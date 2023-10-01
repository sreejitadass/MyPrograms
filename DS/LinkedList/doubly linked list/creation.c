#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp;

void addNodes(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;

    if(head==NULL)
    {
        head=temp=newnode;
        head->next=NULL;
        head->prev=NULL;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        temp->next=NULL;
    }
}

void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    addNodes(1);
    addNodes(9);
    addNodes(4);
    addNodes(6);
    display();
    return 0;
}

