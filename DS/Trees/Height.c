#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    newnode->data=x;
    printf("Left child of %d: ",x);
    newnode->left=create();
    printf("Right child of %d: ",x);
    newnode->right=create();
    return newnode;
}

int FindHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
    {
        int leftht=FindHeight(root->left);
        int rightht=FindHeight(root->right);
        return (leftht>rightht)? leftht+1 :  rightht+1;  
    }
}
int main()
{
    struct node *root=NULL;
    root=create();
    
    int height=0;
    height=FindHeight(root);
    printf("Height of tree is: %d",height);

    return 0;
}