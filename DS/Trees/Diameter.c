#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int getDiameter(struct node *);
int getHeight(struct node *);

int max(int a,int b)
{
    return (a>b)?a:b;
}

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

int getDiameter(struct node *root)
{
    if(root==NULL)
        return 0;
    else
    {
        int leftht=getHeight(root->left);
        int rightht=getHeight(root->right);

        int leftdm=getDiameter(root->left);
        int rightdm=getDiameter(root->right);

        return max(leftht+rightht+1,max(leftdm,rightdm));
    }
}

int getHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else   
        return 1+max(getHeight(root->left),getHeight(root->right));
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    printf("\nDiameter of the tree is: %d",getDiameter(root));
    return 0;
}