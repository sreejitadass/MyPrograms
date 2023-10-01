#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

void Sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

struct node *createBT()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    newnode->data=x;
    printf("Left child of %d: ",x);
    newnode->left=createBT();
    printf("Right child of %d: ",x);
    newnode->right=createBT();
    return newnode;
}

void InorderofBT(struct node *root,int *arr,int *i)
{
    InorderofBT(root->left,arr,i);
    arr[(*i++)]=root->data;
    InorderofBT(root->right,arr,i);
}

void converttoBST(struct node *root,int *arr,int n,int *in1)
{
    Sort(arr,n);

    if(root==NULL)
        return;
    else{
        converttoBST(root->left,arr,n,in1);
        root->data=arr[*in1];
        (*in1)++;
        converttoBST(root->right,arr,n,in1);
    }
}

void printInorder(struct node *root)
{
    if(root!=NULL)
    {
        printInorder(root->left);
        printf("%d ",root->data);
        printInorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    int i=0,in1=0,n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    root=createBT();
    int *arr=(int *)malloc(sizeof(int)*n);

    printf("\nThe inorder of the binary tree is:  ");
    printInorder(root);

    InorderofBT(root,arr,&i);
    converttoBST(root,arr,n,&in1);
    printf("\nThe inorder of the converted BST is:  ");
    printInorder(root);

    return 0;
}