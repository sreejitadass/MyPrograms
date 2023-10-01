#include<stdio.h>
#include<stdbool.h>

void ifBST(int tree[],int n)
{
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        if(tree[i-1]>tree[i])
            flag=true;
    }
    if(flag)
        printf("\nThe binary tree is not a BST\n");
    else
        printf("\nThe binary tree is a BST\n");
}

int main()
{
    int n;
    printf("Enter the number of nodes of binary tree: ");
    scanf("%d",&n);
    int tree[n];
    printf("\nEnter inorder traversal: \n");
    for(int i=0;i<n;i++)
    {
        printf("Node %d: ",i+1);
        scanf("%d",&tree[i]);
    }

    ifBST(tree,n);
    return 0;
}