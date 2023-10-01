#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *InsertAtBeginning(struct node *head, int d)
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
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    
    head->data=45;
    head->link=second;

    second->data=90;
    second->link=NULL;

    int d;
    printf("Enter the data: ");
    scanf("%d",&d);
    head=InsertAtBeginning(head,d);

    struct node *ptr=head;
    printf("List: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}