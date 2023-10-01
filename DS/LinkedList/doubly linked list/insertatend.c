#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *InsertAtEnd(struct node *head,int d)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;

    struct node *tp=head;
    while(tp->next!=NULL)
        tp=tp->next;
    tp->next=temp;
    temp->prev=tp;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=45;
    head->next=second;

    second->prev=head;
    second->data=34;

    int d;
    printf("Enter data to be inserted: ");
    scanf("%d",&d);
    head=InsertAtEnd(head,d);

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
