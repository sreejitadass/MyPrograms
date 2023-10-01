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

struct node *SearchKey(struct node *root,int key)
{
    if(root==NULL)
        return NULL;
    if(key==root->data)
        return root;
    if(key<root->data)
        return SearchKey(root->left,key);
    if(key>root->data)
        return SearchKey(root->right,key);
}
void main()
{
    struct node *root=NULL;
    int n,key;
    printf("Enter the number of nodes of the BST: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter node: ");
        scanf("%d",&x);
        root=CreateBST(root,x);
    }
    printf("Enter the key to be searched: ");
    scanf("%d",&key);
    struct node *val=SearchKey(root,key);
    if(val!=NULL)
        printf("Node %d found\n",key);
    else
        printf("Node not found\n");
}