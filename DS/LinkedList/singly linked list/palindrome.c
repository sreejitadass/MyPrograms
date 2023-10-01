#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *next;
};

struct node *middleElement(struct node *);
struct node *Reverse(struct node *);

bool isPalindrome(struct node *head)
{
    struct node *last,*curr,*mid;
    mid=middleElement(head);
    last=Reverse(mid->next);
    curr=head;
    while(last!=NULL)
    {
        if(last->data!=head->data)
            return false;
        else
        {
            last=last->next;
            curr=curr->next;
        }
    }
    return true;
}

struct node *Reverse(struct node *head)
{
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=nextnode=head;

    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    return head;
}

struct node *middleElement(struct node *head)
{
    struct node *fast,*slow;
    fast=slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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
    ptr=pushElements(ptr,2);

    printf("%d ",isPalindrome(head));

    return 0;
}
