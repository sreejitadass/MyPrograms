#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createTree()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return 0;
    else
    {
        newnode->data=x;
        printf("Left child of %d: ",x);
        newnode->left = createTree();
        printf("Right child of %d: ",x);
        newnode->right = createTree();

        return newnode;
    }
}

int countNodes(struct node *root)
{
    if(root==NULL)
        return 0;
    else
        return 1+countNodes(root->left)+countNodes(root->right);
}

int isCompleteTree(struct node *root,int i,int noOfNodes)
{
    if(root==NULL)
        return 1;
    else if(i>=noOfNodes)
        return 0;
    else
        return (isCompleteTree(root->left,2*i+1,noOfNodes) && isCompleteTree(root->right,2*i+2,noOfNodes));
}

int main()
{
    struct node *root=NULL;
    root=createTree();
    int noOfnodes=countNodes(root);
    int i=0;
    if(isCompleteTree(root,i,noOfnodes))
        printf("\nComplete\n");
    else
        printf("\nNot complete\n");
}