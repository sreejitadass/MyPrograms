#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;
int n=0;

void InsertNodeAtEnd(int d)
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;

    if(head==NULL)
        head=ptr=temp;
    else
    {
        ptr->next=temp;
        ptr=temp;
    }
}

void InsertNodeAtBeg(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}

void DelMidElement()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        n++;
    }

    int mid=(n%2==0)?(n/2):(n/2)+1;
    struct node *ptr1,*ptr2;
    ptr1=head;
    for(int i=1;i<=mid-2;i++)
    {
        ptr1=ptr1->next;
    }
    ptr2=ptr1->next;
    ptr1->next=ptr2->next;
    printf("\nMiddle element is: %d",ptr2->data);
    free(ptr2);
    ptr2=NULL;
}

void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    //creating list
    InsertNodeAtEnd(3);
    InsertNodeAtEnd(9);
    InsertNodeAtEnd(4);
    InsertNodeAtEnd(11);
    InsertNodeAtEnd(8);    //3 9 4 11 8 

    printf("\nOriginal List:  ");
    display();
    printf("\nList after inserting new node at beginning:  ");
    InsertNodeAtBeg(7);
    DelMidElement();
    printf("\nList after deleting middle element: ");
    display();

    return 0;
}