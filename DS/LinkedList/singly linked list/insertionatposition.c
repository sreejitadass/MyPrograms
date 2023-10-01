#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *InsertAtPosition(struct node *head,int pos,int d)
{
    struct node *ptr=head;
    struct node *ptr2=(struct node *)malloc(sizeof(struct node));
    ptr2->data=89;
    ptr2->link=NULL;

    pos--;

    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }

    ptr2->link=ptr->link;
    ptr->link=ptr2;

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

    int pos,d;
    printf("enter position to insert data: ");
    scanf("%d",&pos);
    printf("enter data for new node: ");
    scanf("%d",&d);

    head=InsertAtPosition(head,pos,d);
    
    struct node *ptr=head;
    printf("List: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;   
    }

}