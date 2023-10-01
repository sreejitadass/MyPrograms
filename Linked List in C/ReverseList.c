#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *ReverseList(struct node *head)
{

}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=second;

    second->data=99;
    second->link=third;

    third->data=76;
    third->link=NULL;

    head=ReverseList(head);
    return 0;
}