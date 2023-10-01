#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *newnodeFormer(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

struct node *CreateBST(struct node *node,int x)
{
    if(node==NULL)
        return newnodeFormer(x);
    if(x<node->data)
        node->left=CreateBST(node->left,x);
    else if(x>node->data)
        node->right=CreateBST(node->right,x);
    return node;
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

int main()
{
    struct node *root=NULL;
    int n,i;
    printf("Enter number of elements in the tree: ");
    scanf("%d",&n);
    int arr[n],BST[n];
    for(i=0;i<n;i++)
    {
        printf("Enter node: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
        root=CreateBST(root,arr[i]);
    printf("\nThe preorder of the BST is: ");
    Preorder(root);

    printf("\nThe min heap is: ");
    Inorder(root);

    return 0;   
}