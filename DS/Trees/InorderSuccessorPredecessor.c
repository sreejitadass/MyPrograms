//successor--left most in right st
//predecessor--right most in left st

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *newnode(int x)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}

struct node *createBST(struct node *node, int x)
{
    if(node==NULL)
        return newnode(x);
    else if(x < node->data)
        node->left=createBST(node->left,x);
    else
        node->right=createBST(node->right,x);
    return node;
}

void InorderSuccessor(struct node *root)
{
    struct node *temp=root;
    temp=temp->right;
    while(temp->left!=NULL)
        temp=temp->left;
    printf("\nInorder successor is: %d",temp->data);
}

void InorderPredecessor(struct node *root)
{
    struct node *temp=root;
    temp=temp->left;
    while(temp->right!=NULL)
        temp=temp->right;
    printf("\nInorder predecessor is: %d",temp->data);
}

int main()
{
    struct node *root=NULL;
    int n;
    printf("Enter the number of nodes of the BST: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter node: ");
        scanf("%d",&x);
        root=createBST(root,x);
    }
    InorderPredecessor(root);
    InorderSuccessor(root);
}