#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void CountNodes(struct node *head){
    int count=0;
    if(head==NULL)
        printf("Linked list is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("Count of nodes: %d",count);
}

int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=second;
    
    second->data=98;
    second->link=third;

    third->data=5;
    third->link=NULL;

    CountNodes(head);
    return 0;
}