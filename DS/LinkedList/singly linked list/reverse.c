#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void reverse(struct node *head)
{
    struct node *prevnode,*currentnode,*nextnode,*ptr;
    prevnode=NULL;
    currentnode=nextnode=head;

    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;

    ptr=head;
    printf("List after reversing: \n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    head->data=5;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=1;
    third->next=fourth;

    fourth->data=7;
    fourth->next=NULL;
    
    reverse(head);
    return 0;
}