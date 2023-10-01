#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head1,*head2,*temp,*head3;

void addNodes1(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    if(head1==NULL)
    {
        head1=temp=newnode;
        head1->next=NULL;
        head1->prev=NULL;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        temp->next=NULL;
    }
}

void addNodes2(int y)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=y;
    if(head2==NULL)
    {
        head2=temp=newnode;
        head2->next=NULL;
        head2->prev=NULL;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        temp->next=NULL;
    }
}

struct node *Merge()
{
    struct node *temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=-1;
    temp1->next=NULL;
    temp1->prev=NULL;

    struct node *ptr1,*ptr2,*ptr3;
    ptr1=head1;
    ptr2=head2;
    ptr3=temp1;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;    
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return temp1->next;
}

void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    //for list-1
    addNodes1(5);
    addNodes1(10);
    addNodes1(12);
    addNodes1(15);
    addNodes1(20);      //5 10 12 15 20

    printf("\nLinked List-1:    ");
    display(head1);

    //for list-2
    addNodes2(14);
    addNodes2(23);
    addNodes2(30);
    addNodes2(32);
    addNodes2(40);      //14 23 30 32 40
    printf("\nLinked List-2:    ");
    display(head2);

    head3= Merge();
    printf("\nMerged Linked List:   ");
    display(head3);

}