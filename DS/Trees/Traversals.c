#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *create()
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
        printf("Left child of %d ",x);
        newnode->left=create();
        printf("Right child of %d ",x);
        newnode->right=create();
        return newnode;
    }
}

void Preorder(struct node *root)
{
    if(root==NULL)
        return;
    else
    {
        printf("%d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(struct node *root)
{
    if(root==NULL)
        return;
    else
    {
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}

void Postorder(struct node *root)
{
    if(root==NULL)
        return;
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    struct node *root=NULL;
    printf("\nCreate the binary tree\n");
    root=create();

    printf("\nPreorder traversal: ");
    Preorder(root);

    printf("\nInorder traversal: ");
    Inorder(root);

    printf("\nPostorder traversal: ");
    Postorder(root);

    return 0;
}