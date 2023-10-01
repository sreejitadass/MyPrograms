#include<stdio.h>
int main()
{
    int arr[]={1,34,6,6,34,1,1,9,8,5,5,42};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    printf("Unique elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i!=j && arr[i]==arr[j])
               break;
        }
        if(i==j)
            printf("%d  ",arr[i]);
    }
    return 0;
}