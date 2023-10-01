#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *DeleteAtPosition(struct node *head)
{
    int pos=2;
    struct node *previous,*current;
    previous=current=head;
    if(head==NULL)
    {
        printf("Linked List is empty");
    }
    else if(pos==1)
    {
        struct node *temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    else
    {
        while(pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
    return head;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));


    head->data=76;
    head->link=second;

    second->data=56;
    second->link=third;

    third->data=90;
    third->link=NULL;

    head=DeleteAtPosition(head);
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}