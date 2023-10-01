#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *DeleteFirstNode(struct node *head)
{
    struct node *temp;
    temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    return head;
}
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=second;

    second->data=99;
    second->link=third;

    third->data=76;
    third->link=NULL;

    head=DeleteFirstNode(head);
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("\nelement: %d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}