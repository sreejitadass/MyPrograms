#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;
int n=0;

void Push(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void Pop()
{
    struct node *temp;
    temp=top;
    top=top->link;
    free(temp);
}

void delMiddle()
{
    struct node *ptr=top;
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        n++;
    }

    int mid=(n%2==0)?(n/2):(n/2)+1;
    struct node *ptr1,*ptr2;
    ptr1=top;
    for(int i=1;i<=mid-2;i++)
    {
        ptr1=ptr1->link;
    }
    ptr2=ptr1->link;
    ptr1->link=ptr2->link;

    free(ptr2);
    ptr2=NULL;
}

void Display()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    int n,x;
    printf("Enter the number of elements in a stack: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&x);
        Push(x);
    }
    printf("\nOriginal stack:  ");
    Display();
    printf("\nStack after deleting middle element:  ");
    delMiddle();
    Display();
}