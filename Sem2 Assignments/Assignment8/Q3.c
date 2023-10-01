#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int n,int i)
{
    int smallest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;

    if(left<n && arr[left]<arr[smallest])
        smallest=left;
    if(right<n && arr[right]<arr[smallest])
        smallest=right;

    if(smallest!=i)
    {
        swap(&arr[smallest],&arr[i]);
        heapify(arr,n,smallest);
    }
}

void HeapSort(int arr[],int n)
{
    //build min heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    //delete consecutive elements to make it descending order
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int n,k;
    printf("Enter the number of nodes for a complete binary tree: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter node %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k for k-th largest element: ");
    scanf("%d",&k);
    HeapSort(arr,n);
    printf("Value of %d-th largest element is: %d\n",k,arr[k-1]);

    return 0;
}
