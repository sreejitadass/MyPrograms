#include<stdio.h>
void Triplets(int arr[],int n,int sum)
{
    int TripletCount=0;
    printf("Triplets:  ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    TripletCount++;
                    printf("( %d %d %d)  ",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("\nTotal number of triplets: %d",TripletCount);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum;
    printf("enter the sum: ");
    scanf("%d",&sum);
    Triplets(arr,n,sum);
    return 0;
}