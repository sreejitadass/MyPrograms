#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insertAtBeg(struct node *head)
{
    int d;
    printf("enter data to be inserted: ");
    scanf("%d",&d);
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;

    temp->next=head;
    head->prev=temp;
    head=temp; 

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
    second->next=NULL;

    head=insertAtBeg(head);
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}