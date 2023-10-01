#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *DelAtPos(struct node *head,int pos)
{
    struct node *temp1,*temp2;
    temp1=head;
    while(pos!=1)
    {
        temp1=temp1->next;
        pos--;
    }
    temp2=temp1->prev;
    temp2->next=temp1->next;
    temp1->next->prev=temp2;
    free(temp1);
    temp1=NULL;

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

    head=DelAtPos(head,2);
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}