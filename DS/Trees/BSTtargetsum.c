#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *createTree1()
{
    int x;
    struct node *newnode1=(struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return 0;
    else
    {
        newnode1->data=x;
        printf("Left child of %d: ",x);
        newnode1->left = createTree1();
        printf("Right child of %d: ",x);
        newnode1->right = createTree1();

        return newnode1;
    }
}

struct node *createTree2()
{
    int x;
    struct node *newnode2=(struct node *)malloc(sizeof(struct node)); 
    printf("\nEnter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return 0;
    else
    {
        newnode2->data=x;
        printf("Left child of %d: ",x);
        newnode2->left = createTree2();
        printf("Right child of %d: ",x);
        newnode2->right = createTree2();

        return newnode2;
    }
}

void convertToarr1(struct node *root1,int *arr1,int *index1)
{
    if(root1!=NULL)
    {
        convertToarr1(root1->left,arr1,index1);
        arr1[(*index1)++]=root1->data;
        convertToarr1(root1->right,arr1,index1);
    }
}

void convertToarr2(struct node *root2,int *arr2,int *index2)
{
    if(root2!=NULL)
    {
        convertToarr2(root2->left,arr2,index2);
        arr2[(*index2)++]=root2->data;
        convertToarr2(root2->right,arr2,index2);
    }
}

void BSTtargetSum(int *arr1,int *arr2,int n1,int n2)
{
    int x;
    printf("\nEnter the target sum: ");
    scanf("%d",&x);
    printf("\nThe pairs are:  ");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]+arr2[j]==x)
            {
                printf("(%d %d)  ",arr1[i],arr2[j]);
            }
        }
    }
}

int main()
{
    struct node *root1=NULL,*root2=NULL;
    int n1,n2,index1,index2;
    index1=0;
    index2=0;

    printf("Enter the size of first BST: ");
    scanf("%d",&n1);
    printf("Enter the size of second BST: ");
    scanf("%d",&n2);

    printf("\nFor tree 1: \n");
    root1=createTree1();
    printf("\nFor tree 2: \n");
    root2=createTree2();
    int *arr1=(int *)malloc(sizeof(int)*n1);
    int *arr2=(int *)malloc(sizeof(int)*n2);

    convertToarr1(root1,arr1,&index1);
    convertToarr2(root2,arr2,&index2);
    BSTtargetSum(arr1,arr2,n1,n2);
    return 0;
}