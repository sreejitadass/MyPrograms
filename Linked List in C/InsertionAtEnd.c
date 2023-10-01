#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void InsertEnd(struct node *head,int data)
{
    printf("enter the data to be inserted at the end: ");
    scanf("%d",&data);
    struct node *ptr,*temp;
    temp=(struct node *)malloc(sizeof(struct node)); /*allocating memory and 
                                                     creating the temp node*/
    temp->data=data;
    temp->link=NULL;
    ptr=head;
    while(ptr->link!=NULL)
        ptr=ptr->link;
    ptr->link=temp;
}

void printList(struct node *head){
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\nElement is: %d",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    int data;
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    head->data=12;
    head->link=second;

    second->data=26;
    second->link=third;

    third->data=45;
    third->link=NULL;

    InsertEnd(head,data);
    printList(head);
    return 0;
}