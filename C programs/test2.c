//find longest increasing subarray

#include<stdio.h>

//find longest subarray
void LongestSubarray(int a[],int n)
{
    int subArr[]={0},m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)   //a[i...j] is the subarray
        {
            for(int k=i;k<=j;k++)
            {
                subArr[m++]=a[k];
            }
        }
        if(isSorted(subArr,n)==1)
        {
            int l=sizeof(subArr)/sizeof(subArr[0]);
            int max=0;
            if(l>max)
                max=l;
        }
    }
    printf("longest increasing subarray is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",subArr[i]);
    }
    
}

//check for sorted
int isSorted(int subArr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(subArr[i]>subArr[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int a[]={3,1,4,1,5,9,2,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    LongestSubarray(a,n);
    return 0;
}