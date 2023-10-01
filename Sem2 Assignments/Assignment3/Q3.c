#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head1,*head2;

void create1(int d1)
{
    struct node *temp1,*ptr1;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=d1;
    temp1->next=NULL;

    if(head1==NULL)
        head1=ptr1=temp1;
    else
    {
        ptr1->next=temp1;
        ptr1=temp1;
    }
}

void create2(int d2)
{
    struct node *temp2,*ptr2;
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=d2;
    temp2->next=NULL;

    if(head2==NULL)
        head2=ptr2=temp2;
    else
    {
        ptr2->next=temp2;
        ptr2=temp2;
    }
}

void Intersection()
{
    int flag=0;
    struct node *ptr1,*ptr2;
    ptr1=head1;
    ptr2=head2;
    printf("\nThe intersection elements are: ");
    while(ptr1!=NULL)
    {
        while(ptr2!=NULL)
        {
            if(ptr1->data==ptr2->data)
            {
                printf("%d ",ptr2->data);
                ptr2=ptr2->next;
                flag+=1;
            }
            ptr1=ptr1->next;
        }
    }
    if(flag==0)
        printf("\nNo intersection elements found");
}

void display()
{
    struct node *ptr;
    ptr=head1;
    printf("\nLinked List-1: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    ptr=head2;
    printf("\nLinked List-2: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    //list-1
    create1(2);
    create1(5);
    create1(3);
    create1(8);         //2 5 3 8

    //list-2
    create2(5);
    create2(8);
    create2(7);         //5 8 7

    display();
    Intersection();
    return 0;
}