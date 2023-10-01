#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *InsertEnd(struct node *p,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node)); /*allocating memory and 
                                                     creating the temp node*/
    temp->data=data;
    temp->link=NULL;
    while(p->link!=NULL)
        p=p->link;
    p->link=temp;
    return temp;
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

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=77;
    head->link=NULL;
    struct node *p=head;
    p=InsertEnd(p,21);
    p=InsertEnd(p,38);
    p=InsertEnd(p,84);
    p=InsertEnd(p,50);
    printList(head);
    return 0;
}