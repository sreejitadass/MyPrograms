#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *FormNewNode(int x)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=temp->right=NULL;
}

struct node *CreateBST(struct node *node,int x)
{
    if(node==NULL)
        return FormNewNode(x);
    if(x < node->data)
        node->left=CreateBST(node->left,x);
    else if(x > node->data)
        node->right=CreateBST(node->right,x);
    return node;
}

struct node *InOrderPredecessor(struct node *root)      //rightmost node of left subtree
{
    root=root->left;
    while(root->right!=NULL)
        root=root->right;
    return root;
}

struct node *DeleteNode(struct node *root, int value)
{
    struct node *InPre=NULL;
    if(root==NULL)
        return NULL;
    else if(root->left==NULL && root->right==NULL){  //leaf node(0 children)
        free(root);
        return NULL;
    }
    else if(value <root->data)
        root->left=DeleteNode(root->left,value);
    else if(value> root->data)
        root->right=DeleteNode(root->right,value);
    else{                                           //deleting root node
        InPre=InOrderPredecessor(root);
        root->data=InPre->data;
        root->left=DeleteNode(root->left,InPre->data);
    }
    return root;  
}

void InorderTraversal(struct node *root)
{
    if(root!=NULL)
    {
        InorderTraversal(root->left);
        printf("%d ",root->data);
        InorderTraversal(root->right);
    }
}

void main()
{
    struct node *root=NULL;
    int n,value;
    printf("Enter the number of nodes of the BST: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter node: ");
        scanf("%d",&x);
        root=CreateBST(root,x);
    }
    printf("\nEnter value to be deleted: ");
    scanf("%d",&value);
    printf("\nThe original BST is: ");
    InorderTraversal(root);
    DeleteNode(root,value);
    printf("\nBST after deletion of %d is: ",value);
    InorderTraversal(root);
}