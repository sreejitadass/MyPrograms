#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *reverse(struct node *head)
{
    struct node *ptr1,*ptr2;
    ptr1=head;
    ptr2=ptr1->next;

    //to reverse first node
    ptr1->next=NULL;
    ptr1->prev=ptr2;

    //after first node is reversed to last node
    while(ptr2!=NULL)
    {
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head=ptr1;
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

    head=reverse(head);

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
