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
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}

void insert(int arr[],int n)
{
    int item;
    printf("Enter the item to be inserted: ");
    scanf("%d",&item);

    arr[n]=item;
    n=n+1;
    //build max heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
}

void delete(int arr[],int n)
{
    int item,i;
    printf("Enter the item to be deleted: ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
            break;
    }
    swap(&arr[i],&arr[n-1]);
    n=n-1;
     //build max heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int n;
    printf("Enter number of elements to be inserted in the heap: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter node: ");
        scanf("%d",&arr[i]);
    }
    int choice;
    printf("\n1.Insertion");
    printf("\n2.Deletion");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            insert(arr,n);
            display(arr,n+1);
            break;
        case 2:
            delete(arr,n);
            display(arr,n-1);
            break;
        default:
            printf("\nInvalid choice");
    }
    return 0;
}