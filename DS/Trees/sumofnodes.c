#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *createTree()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    else
    {
        newnode->data=x;
        printf("\nLeft child of %d: ",x);
        newnode->left=createTree();
        printf("\nRight child of %d: ",x);
        newnode->right=createTree();
        return newnode;
    }
}

int SumofNodes(struct node *root)
{
    int leftsum=0,rightsum=0,totalsum=0;
    if(root==NULL)
        return 0;
    else
    {
        if(root->left!=NULL)
            leftsum=SumofNodes(root->left);
        if(root->right!=NULL)
            rightsum=SumofNodes(root->right);
        totalsum=leftsum+rightsum+root->data;
        return totalsum;
    }
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    printf("Total sum of all nodes is: %d\n",SumofNodes(root));
    return 0;
}