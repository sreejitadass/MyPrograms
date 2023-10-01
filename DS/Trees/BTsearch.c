#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createTree()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    newnode->data=x;
    printf("Left child of %d: ",x);
    newnode->left=createTree();
    printf("Right child of %d: ",x);
    newnode->right=createTree();
    return newnode;
}

void SearchKey(struct node *root,bool flag,int key)
{
    if(root==NULL)
        return;
    else if(key==root->data)
    {
        flag=true;
        return;
    }
    else if(flag==false && root->left!=NULL)
    {
        SearchKey(root->left,flag,key);
    }
    else
    {
        SearchKey(root->right,flag,key);
    }
}

int main()
{
    struct node *root=NULL;
    root=createTree();

    int key;
    printf("\nEnter the key to be searched: ");
    scanf("%d",&key);

    bool flag=false;
    SearchKey(root,flag,key);
    if(flag)
        printf("\nElement found in binary tree\n");
    else
        printf("\nElement not found\n");
    return 0;
}
