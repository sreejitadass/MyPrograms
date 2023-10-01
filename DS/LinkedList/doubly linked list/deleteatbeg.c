#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *DelAtBeg(struct node *head)
{
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;

    return head;
}
int main()
{
    struct node *head,*second,*third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));


    head->prev=NULL;
    head->data=45;
    head->next=second;

    second->prev=head;
    second->data=34;
    second->next=third;

    third->prev=second;
    third->data=87;
    third->next=NULL;

    head=DelAtBeg(head);

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}