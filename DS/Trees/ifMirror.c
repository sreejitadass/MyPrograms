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

void Inorder1(struct node *root1,int *in1,int *index1)
{
    if(root1!=NULL)
    {
        Inorder1(root1->left,in1,index1);
        in1[(*index1)++]=root1->data;
        Inorder1(root1->right,in1,index1);
    }
}

void Inorder2(struct node *root2,int *in2,int *index2)
{
    if(root2!=NULL)
    {
        Inorder1(root2->left,in2,index2);
        in2[(*index2)++]=root2->data;
        Inorder1(root2->right,in2,index2);
    }
}

void ifMirror(int *in1,int *in2,int n)
{
    int flag=1;
    for(int i=0;i<n/2;i++)
    {
        if(in1[i]!=in2[n-i-1])
        {
            flag=0;
            printf("\nThe trees are not mirror\n");
            break;
        }
    }
    if(flag)
        printf("\nThe trees are mirror\n");
}

int main()
{
    struct node *root1=NULL;
    struct node *root2=NULL;

    int n,index1,index2;
    index1=0;
    index2=0;
    printf("Enter the number of nodes in trees 1 and 2: ");
    scanf("%d",&n);

    printf("\nFor tree 1: \n");
    root1=createTree1();
    printf("\nFor tree 2: \n");
    root2=createTree2();

    int *in1=(int *)malloc(sizeof(int)*n);
    int *in2=(int *)malloc(sizeof(int)*n);

    Inorder1(root1,in1,&index1);
    Inorder2(root2,in2,&index2);

    ifMirror(in1,in2,n);
    return 0;
}