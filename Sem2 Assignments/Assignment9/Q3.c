#include<stdio.h>

void Sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])     //descending order
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int changeSweetness(int arr[],int n,int k)
{
    int x=n;
    for(int i=0;i<x;i++)
    {
        Sort(arr,x);
        while(arr[i]<k)
        {
            int num=(1*arr[x-1])+(2*arr[x-2]);
            arr[x-2]=num;
            x--;
        }
    }
    printf("Number of iterations: %d",x);
}

void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int k,n;
    printf("Enter the threshold value: ");
    scanf("%d",&k);
    printf("Enter the number of cookies: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the sweetness for cookie %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    changeSweetness(arr,n,k);
    printf("\nChanged sweetness: ");
    Display(arr,n);

    return 0;
}