#include<stdio.h>

void MergeArrays(int a1[],int a2[],int n,int N,int mergedArr[])
{
    int k=0;
    //merge 2 arrays
    for(int i=0;i<n;i++)
    {
        mergedArr[k++]=a1[i];
    }
    for(int j=0;j<N;j++)
    {
        mergedArr[k++]=a2[j];
    }
    //sort in descending order
    int temp;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(mergedArr[j]<mergedArr[j+1])
            {
                temp=mergedArr[j];
                mergedArr[j]=mergedArr[j+1];
                mergedArr[j+1]=temp;
            }
        }
    }
    printf("Merged array in descending order: ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",mergedArr[i]);
    }
}

int main()
{
    int a1[]={23,14,5,3,1};
    int a2[]={12,7,4,3,-1};
    int n=sizeof(a1)/sizeof(a1[0]);
    int N=2*n;
    int mergedArr[N];
    MergeArrays(a1,a2,n,N,mergedArr);
    return 0;
}
