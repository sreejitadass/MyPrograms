#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insertatbeg(struct node *tail)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(tail!=NULL)  //list is empty
    {
        tail=newnode;
        tail->next=newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
    }
    
    struct node *temp;
    while(temp->next!=tail->next)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);

}

int main()
{
    struct node *tail=(struct node *)malloc(sizeof(struct node));
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    first->data=89;
    first->next=second;

    second->data=76;
    second->next=third;

    third->data=43;
    third->next=tail;

    tail->data=21;
    tail->next=first;

    insertatbeg(tail);

}
