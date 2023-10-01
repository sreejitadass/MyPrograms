#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *DeleteList(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        free(head);
        head=temp;
    }
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

    head=DeleteList(head);
    
    if(head==NULL)
        printf("List deleted successfully");
    else
        printf("Not deleted");

    return 0;

}