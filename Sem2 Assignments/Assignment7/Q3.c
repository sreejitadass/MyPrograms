#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *CreateList(struct node *head,int x)
{
    struct node *temp;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
        temp=head=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}

struct node *MiddleElement(struct node *head)
{
    struct node *slow=head,*fast=head;
    while (fast->next!=NULL && fast->next->next!=NULL) 
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

struct node *Merge(struct node *left,struct node *right)
{
    struct node *sorted=NULL;
    if(left==NULL)
        return right;
    if(right==NULL)
        return left;
    
    if(left->data<=right->data)
    {
        sorted=left;
        sorted->next=Merge(left->next,right);
    }
    else
    {
        sorted=right;
        sorted->next=Merge(left,right->next);
    }
    return sorted;
}
struct node *MergeSort(struct node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    else
    {
        struct node *mid=MiddleElement(head);
        struct node *midNext=mid->next;
        mid->next=NULL;   //dividing the problem(dividing LL in 2 halves)

        struct node *left=MergeSort(head);
        struct node *right=MergeSort(midNext);
        
        struct node *sorted=Merge(left,right);
    }
}
void DisplayList(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head=NULL;
    int n,x;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of node %d: ",i+1);
        scanf("%d",&x);
        head=CreateList(head,x);
    }


    printf("Unsorted linked list: ");
    DisplayList(head);
    head=MergeSort(head);
    printf("\nSorted linked list: ");
    DisplayList(head);

    return 0;
}