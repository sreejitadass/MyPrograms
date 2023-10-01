#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void removeDuplicates(struct node *head)
{
    struct node *ptr1,*ptr2,*dup;
    ptr1=head;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->data==ptr2->next->data)
            {
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                free(dup);
                dup=NULL;
            }
            else
            {
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
}

struct node *pushElements(struct node *ptr,int d)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;

    ptr->next=newnode;
    return newnode;
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=2;
    head->next=NULL;

    struct node *ptr=head;
    ptr=pushElements(ptr,3);
    ptr=pushElements(ptr,4);
    ptr=pushElements(ptr,3);
    ptr=pushElements(ptr,5);

    removeDuplicates(head);

    struct node *temp=head;
    printf("List after removing duplicates: \n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}