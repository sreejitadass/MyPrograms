#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;
int n=0,mid;
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

void MidElement()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        n++;
    }
    mid=(n%2==0)?(n/2):(n/2)+1; 
}

struct node *Reverse(struct node *temp)
{
    struct node *current,*prevnode,*nextnode;
    current=temp;
    prevnode=nextnode=NULL;
    while(current != NULL){  
        nextnode = current->next;  
        current->next = prevnode;  
        prevnode = current;  
        current = nextnode;  
    }  
    return prevnode;            //returns head pointer of reversed list
}

int isPalindrome()
{
    struct node *current=head;
    for(int i=1;i<mid;i++)
        current=current->next;
    struct node *revhead=Reverse(current->next);
    while(head!=NULL && revhead!=NULL)
    {
        if(head->data!=revhead->data)
            return 0;
        else
        {
            head=head->next;
            revhead=revhead->next;
        }
    }
    return 1;
}

int main()
{
    InsertNodeAtEnd(2);
    InsertNodeAtEnd(3);
    InsertNodeAtEnd(4);
    InsertNodeAtEnd(3);
    InsertNodeAtEnd(2);         //2 3 4 3 2

    MidElement();
    if(isPalindrome()==0)
        printf("\nNot a palindrome");
    else
        printf("\nPalindrome");
}
