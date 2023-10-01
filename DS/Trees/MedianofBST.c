#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *createNewnode(int x)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *createBST(struct node *node,int x)
{
    if(node==NULL)
        return createNewnode(x);
    if(x < node->data)
        node->left=createBST(node->left,x);
    else
        node->right=createBST(node->right,x);
    return node;
}

void InordertoArray(struct node *root,int *arr,int *index)
{
    if(root!=NULL)
    {
        InordertoArray(root->left,arr,index);
        arr[(*index)++]=root->data;
        InordertoArray(root->right,arr,index);
    }
}

void Median(int *arr,int n)
{
    int median;
    if(n%2!=0)                  //no of nodes is odd        
        median=arr[((n+1)/2)-1];
    else                        //no of nodes is even
        median=arr[(((n/2)+(n/2+1))/2)-1];
    printf("\nThe median of the BST is: %d\n",median);
}

int main()
{
    struct node *root=NULL;
    int n,x,index=0;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("\n");
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data for node %d: ",i+1);
        scanf("%d",&x); 
        root=createBST(root,x);   
    }
    InordertoArray(root,arr,&index);
    
    Median(arr,n);
    return 0;
}