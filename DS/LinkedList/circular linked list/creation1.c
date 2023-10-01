#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int main()
{
    //creation
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head=NULL;
    struct node *temp=head;
    int choice=1;

    while(choice)
    {
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL)
        head=temp=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    temp->next=head;
    printf("Do you want to continue?(0/1) ");
    scanf("%d",&choice);
    }
     
    
    //traversal
    struct node *ptr;
    if(head==NULL)
        printf("Empty list");
    else
    {
        ptr=head;
        printf("List is: ");
        while(ptr->next!=head)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d ",ptr->data);
        
    }
    return 0;
}