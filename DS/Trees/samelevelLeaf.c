#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

int max(int a,int b)
{
    return (a>b)?a:b;
}

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

int getHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
        return max(getHeight(root->left)+1,getHeight(root->right)+1);
}

void ifSameLevelLeaf(struct node *root)
{
    int leftheight=getHeight(root->left);
    int rightheight=getHeight(root->right);
    if(leftheight==rightheight)
        printf("\nLeaves are at same level\n");
    else
        printf("\nLeaves are not at same level\n");
}

int main()
{
    struct node *root=NULL;
    root=create();
    ifSameLevelLeaf(root);
    return 0;
}