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
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
        return 0;
    else
    {
        newnode->data = x;
        printf("Left child of %d: ", x);
        newnode->left = createTree();
        printf("Right child of %d: ", x);
        newnode->right = createTree();

        return newnode;
    }
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

int ifBalanced(struct node *root)
{
    int leftht=FindHeight(root->left);
    int rightht=FindHeight(root->right);

    if(root==NULL)
        return 0;
    if(abs(leftht-rightht)<=1)
        return 1;
    return 0;

}

int main()
{
    struct node *root=NULL;
    root=createTree();
    if(ifBalanced(root))
        printf("\nBalanced tree\n");
    else
        printf("\nUnbalanced tree\n");
    return 0;
}