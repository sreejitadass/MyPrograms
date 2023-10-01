#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void printList(struct node *head){
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\nElement is: %d",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *current=(struct node *)malloc(sizeof(struct node));

    head->data=56;
    head->link=current;

    current->data=78;
    current->link=NULL;

    current=(struct node *)malloc(sizeof(struct node));
    current->data=90;
    current->link=NULL;
    head->link->link=current;

    printList(head);
    return 0;
}