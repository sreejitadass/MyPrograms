#include<stdio.h>
int LinearSearch(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr={19,67,54,8,-96,34};
    int x = 67;
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("enter the search element: ");
    // scanf("%d",&x);
    int result = LinearSearch(arr,n,x);
    (result == -1)
        ?printf("The element is not present in the array")
        :printf("The element is present in the array at index %d", result);
    return 0;
}