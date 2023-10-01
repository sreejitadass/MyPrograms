#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode()
{
    int x;
    printf("\nEnter the data: ");
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}
int FindRootinInorder(struct node *root,int in[],int n)
{ 
    for(int i=0;i<n;i++)
    {
        if(root->data==in[i])
        {
            return i;
        }
    }
}

struct node *createTree(struct node *root,int in[],int n,int inStart,int inEnd)
{
    if(root==NULL)
        return -1;
    else
    {
        root->left=createTree(root,in,n,0,FindRootinInorder(root,in,n)-1);
        root->right=createTree(root,in,n,FindRootinInorder(root,in,n)+1,n-1);
    }
}

void PreorderTrav(struct node *root)
{
    if(root==NULL)
        return -1;
    else
    {
        printf("%d ",root->data);
        PreorderTrav(root->left);
        PreorderTrav(root->right);
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes of the tree: ");
    scanf("%d",&n);
    int in[n],post[n];
    printf("\nInorder traversal: ");
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&in[i]);
    }
    printf("\nPostorder traversal: ");
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&post[i]);
    }
    struct node *root=CreateNode();
    createTree(root,in,n,0,n-1);
    PreorderTrav(root);

    return 0;
}