#include<stdio.h>

void Merge(int a[],int lb,int mid,int ub)
{
    //int n=sizeof(a)/sizeof(a[0]);
    int n1=mid-lb+1;
    int n2=ub-mid;
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i]=a[lb+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=a[mid+1+j];
    }
    int i=0,j=0,k=lb;
    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
            a[k++]=left[i++];
        else
            a[k++]=right[j++];
    }
    while(i<n1)
        a[k++]=right[i++];
    while(j<n2)
        a[k++]=left[j++];

}

void MergeSort(int a[],int lb,int ub)
{
    int mid=(lb+ub)/2;
    MergeSort(a,lb,mid);
    MergeSort(a,mid+1,ub);
    Merge(a,lb,mid,ub);
}

void Display(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n],lb=0,ub=n-1;
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nOriginal array:  ");
    Display(a,n);
    printf("\nArray after merge sort:  ");
    MergeSort(a,lb,ub);
    Display(a,n);
    return 0;
}