#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int Sort(int *arr,int n)
{
    int ctr=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                ctr++;
            }
        }
        if(ctr==0)
        {
            break;
        }
    }
    return ctr;
}

struct node *createTree()
{
    int x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return 0;
    else
    {
        newnode->data=x;
        printf("Left child of %d: ",x);
        newnode->left = createTree();
        printf("Right child of %d: ",x);
        newnode->right = createTree();

        return newnode;
    }
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

int main()
{
    struct node *root=NULL;
    int n,index=0;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    root=createTree();
    int *arr=(int *)malloc(sizeof(int)*n);
    InorderTraversal(root,arr,&index);
    printf("Minimum number of swaps required: %d",Sort(arr,n));

    return 0;
}