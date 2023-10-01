#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *insertAtEnd(struct node *ptr,int d)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->link=NULL;

    ptr->link=newnode;
    return newnode;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=head;
    ptr=insertAtEnd(ptr,67);
    ptr=insertAtEnd(ptr,98);

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}