#include<stdio.h>
#include<stdlib.h>

struct node *create();

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *create()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node):  ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    else
    {
        newnode->data=x;
        printf("Left child of %d ",x);
        newnode->left=create();
        printf("Right child of %d ",x);
        newnode->right=create();

        return newnode;
    }
}
int main()
{
    struct node *root=NULL;
    root=create();
    return 0;
}