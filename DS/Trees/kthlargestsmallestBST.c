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

struct node *createBST(struct node* node,int x)
{
    if(node==NULL)
        return newnode(x);
    if(x < node->data)
        node->left  = createBST(node->left, x);
    else if(x > node->data)
        node->right = createBST(node->right, x);
    return node;
}

void InorderTraversal(struct node *root,int *arr,int *index)
{
    if(root!=NULL)
    {
        InorderTraversal(root->left,arr,index);
        arr[(*index)++]=root->data;
        InorderTraversal(root->right,arr,index);
    }
}

void kthLargest(int *arr,int n)
{
    int k;
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    printf("%d-th largest element is: %d\n",k,arr[n-k]);
}

void kthSmallest(int *arr,int n)
{
    int k;
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    printf("%d-th smallest element is: %d\n",k,arr[k-1]);
}

int main()
{
    struct node *root=NULL;
    int n,x;
    int index=0;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&x);
        root = createBST(root,x); 
    }
    int *arr=(int *)malloc(sizeof(int)*n);
    InorderTraversal(root,arr,&index);

    printf("\nFor k-th largest: \n");
    kthLargest(arr,n);
    printf("\nFor k-th smallest: \n");
    kthSmallest(arr,n);
    return 0;
}
