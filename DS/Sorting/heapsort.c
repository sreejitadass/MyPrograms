#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;

    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }   
}

void HeapSort(int arr[],int n)
{
    //create max heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
}

void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int n;
    printf("Enter the number of nodes for a complete binary tree: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter node %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nUnsorted heap: ");
    Display(arr,n);
    printf("\nSorted heap: ");
    HeapSort(arr,n);
    Display(arr,n);    
}