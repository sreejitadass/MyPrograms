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

int isFullTree(struct node *root)
{
    if(root==NULL)
        return 1;
    if(root->left==NULL && root->right==NULL)
        return 1;
    if(root->left && root->right)
        return (isFullTree(root->left)&&isFullTree(root->right));
    return 0;
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    if(isFullTree(root))
        printf("\nFull\n");
    else
        printf("\nNot full\n");
    return 0;

}