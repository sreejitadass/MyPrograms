#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *InsertBeginning(struct node *head,int d)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    return head;
}

int main()
{
    int d;
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=ptr;

    ptr->data=98;
    ptr->link=NULL;
    printf("enter data to be inserted: ");
    scanf("%d",&d);
    head=InsertBeginning(head,d);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\nelement: %d",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}