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

struct node *ConverttoMirror(struct node *root)
{
    struct node *temp=NULL;

    if(root==NULL)
        return root;
    temp=root->left;
    root->left=root->right;
    root->right=temp;

    if(root->left)
        ConverttoMirror(root->left);
    if(root->right)
        ConverttoMirror(root->right);
    return root;
}

void Inorder(struct node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    printf("\nOriginal tree inorder traversal: ");
    Inorder(root);
    ConverttoMirror(root);
    printf("\nMirrored tree inorder traversal: ");
    Inorder(root);
    return 0;
}