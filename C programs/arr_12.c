#include<stdio.h>
void delElement(int arr[],int n,int pos,int x)
{
    int i;
    for(i=n-1;i>=pos+1;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("array after deleting element: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n,pos,x;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be deleted: ");
    scanf("%d",&x);
    printf("enter the index: ");
    scanf("%d",&pos);
    delElement(arr,n,pos,x);
    return 0;
    }