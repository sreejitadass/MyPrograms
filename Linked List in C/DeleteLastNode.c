#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *DeleteLastNode(struct node *head)
{
    struct node *temp=head;
    struct node *temp2=head;
    temp=head->link;
    while(temp2!=NULL)
        temp2=temp2->link;
    free(temp2);
    temp2=NULL;
    return head;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=second;

    second->data=99;
    second->link=third;

    third->data=76;
    third->link=NULL;

    head=DeleteLastNode(head);
    struct node *ptr=NULL;
    ptr=head;
    while(ptr->link!=NULL)
    {
        printf("\nelement: %d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}