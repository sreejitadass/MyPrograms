#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *DeleteFromPosition(struct node *head)
{
    struct node *previous,*current;
    previous=current=head;
    int pos=2;
    if(head==NULL)
        printf("List is empty");
    else if(pos==1)
    {
        head=current->link;
        free(current);
        current=NULL;
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

    head->data=98;
    head->link=second;

    second->data=77;
    second->link=third;

    third->data=56;
    third->link=NULL;

    struct node *ptr;
    head=DeleteFromPosition(head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\nElement: %d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}