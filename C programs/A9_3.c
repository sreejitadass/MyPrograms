#include <stdio.h>

int subArray(int arr[],int subArr[],int l1,int l2)
{
    int k=0;
    for(int i=0;i<l1;i++)
    {
        while(k<l2)
        {
            if(arr[k++]==arr[i])
            {
                return 1; 
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]={3,5,18,0,8,6,42};
    int subArr[]={18,8,0};
    int l1=sizeof(arr)/sizeof(arr[0]);
    int l2=sizeof(subArr)/sizeof(subArr[0]);
    int ans = subArray(arr,subArr,l1,l2);
    (ans==1)?printf("Subarray"):printf("Not a subarray");
    return 0;
}