#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *current=(struct node *)malloc(sizeof(struct node));
    struct node *current2=(struct node *)malloc(sizeof(struct node));

    head->data=36;
    head->link=current;

    current->data=90;
    current->link=current2;

    current2->data=78;
    current2->link=NULL;
    
    int count=0;
    struct node *ptr=NULL;
    ptr=head;
    printf("Elements: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
        count++;
    }
    printf("\nNumber of nodes: %d",count);

    return 0;
}