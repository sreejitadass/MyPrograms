#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *DeleteAtBeginning(struct node *head)
{
    struct node *temp=head;
    head=head->link;
    free(temp);
    temp=NULL;

    return head;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));

    head->data=76;
    head->link=second;

    second->data=56;
    second->link=NULL;

    head=DeleteAtBeginning(head);
    struct node *ptr=head;
    printf("List: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;   
    }
    return 0;
}