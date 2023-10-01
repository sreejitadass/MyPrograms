#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *Insert(struct node* node,int x)
{
    if(node==NULL)
        return newnode(x);
    if(x < node->data)
        node->left  = Insert(node->left, x);
    else if(x > node->data)
        node->right = Insert(node->right, x);
    return node;
}

void InorderTraversal(struct node *root)
{
    if(root!=NULL){
        InorderTraversal(root->left);
        printf("%d ",root->data);
        InorderTraversal(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter the data: ");
        scanf("%d",&x);
        root = Insert(root,x); 
    }
    
    InorderTraversal(root);
}