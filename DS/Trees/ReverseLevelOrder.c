#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int max(int a,int b)
{
    return (a>b)?a:b;
}

struct node *createTree()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("\nEnter the data(-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return NULL;
    else
    {
        newnode->data=x;
        printf("Left child of %d: ",x);
        newnode->left=createTree();
        printf("Right child of %d: ",x);
        newnode->right=createTree();

        return newnode;
    }
}

int getHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
        return max(getHeight(root->left)+1,getHeight(root->right)+1);
}

void printLevel(struct node *root,int level)
{
    if(!root)
        return;
    if(level==0)
        printf("%d ",root->data);
    else
    {
        printLevel(root->left,level-1);
        printLevel(root->right,level-1);
    }
}

void ReverseLevelOrderTrav(struct node *root)
{
    int height=getHeight(root);
    for(int i=height;i>=0;i--)
    {
        printLevel(root,i);
    }
}

int main()
{
    struct node *root=NULL;
    root=createTree();
    
    printf("\nReverse level order traversal:  ");
    ReverseLevelOrderTrav(root);
    return 0;
}