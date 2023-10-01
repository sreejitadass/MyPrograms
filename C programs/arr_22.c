#include <stdio.h>
int subArraySum(int arr[],int n,int sum)
{
    int currentSum=0,i,j;
    for(i=0;i<n;i++)
    {
        currentSum=arr[i];
        for(j=i+1;j<n;j++)
        {
           if(currentSum==sum)
           {
            printf("sum found between index %d and %d ",i,j-1);
            return 1;
           }
           if(currentSum>sum||j==n)
           {
            break;
           }
           currentSum+=arr[j];
        }
    }
    printf("No subarray found");
    return 0;
}

int main()
{
    int arr[]={11,3,4,7,99,2,33,1,-90,55,321};
    int n,sum;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter the sum: ");
    scanf("%d",&sum);
    subArraySum(arr,n,sum);
    return 0;
}