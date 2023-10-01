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

int getHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
    {
        int leftht=getHeight(root->left);
        int rightht=getHeight(root->right);
        return (leftht>rightht)?(leftht+1):(rightht+1);
    }
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

void LevelOrderTrav(struct node *root)
{
    int height=getHeight(root);
    for(int i=0;i<=height;i++)
    {
        printLevel(root,i);
    }
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    printf("\nLevel order traversal of the tree is:  ");
    LevelOrderTrav(root);
    return 0;
}