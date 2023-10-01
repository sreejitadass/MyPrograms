#include<stdio.h>
#include<stdbool.h>

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

void ifEqual(int BST1[],int BST2[],int m,int n)
{
    bool flag=true;

    Sort(BST1,m);
    Sort(BST2,n);
    for(int i=0;i<n;i++)
    {
        if(BST1[i]!=BST2[i])
            flag=false;
    }
    if(!flag)
        printf("\nBSTs are unequal\n");
    else
        printf("\nBSTs are equal\n");
}

int main()
{
    int m,n;
    printf("Enter size of first BST: ");
    scanf("%d",&m);
    printf("Enter size of second BST: ");
    scanf("%d",&n);
    int BST1[m],BST2[n];

    if(m!=n)
        printf("\nThe BSTs are of unequal length\n");
    else
    {
        printf("\nFor first BST: \n");
        for(int i=0;i<m;i++)
        {
            printf("Enter node %d: ",i+1);
            scanf("%d",&BST1[i]);
        }
        printf("\nFor second BST: \n");
        for(int i=0;i<n;i++)
        {
            printf("Enter node %d: ",i+1);
            scanf("%d",&BST2[i]);
        }
        ifEqual(BST1,BST2,m,n);
    }

    return 0;
}