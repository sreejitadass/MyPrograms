#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *DeleteAtEnd(struct node *head)
{
    struct node *temp2,*temp;
    temp2=temp=NULL;
    temp2=head->link;
    temp2->link=NULL;
    while(temp!=NULL)
        temp=temp->link;
    free(temp);
    temp=NULL;

    return head;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));


    head->data=76;
    head->link=second;

    second->data=56;
    second->link=third;

    third->data=90;
    third->link=NULL;

    head=DeleteAtEnd(head);
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

    return 0;

}