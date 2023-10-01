//Median of merged sorted array

#include <stdio.h>
void MedianofArray(int arr1[],int arr2[],int merged[],int n1,int n2,int N)
{
    //merge 2 arrays
    int k=0;
    for(int i=0;i<n1;i++)
        merged[k++]=arr1[i];
    for(int i=0;i<n2;i++)
        merged[k++]=arr2[i];

    //sort in ascending order
    int temp;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(merged[j]>merged[j+1])
            {
                temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }

    //find median
    double median;
    median=(N%2!=0)?(merged[N/2]):((merged[N/2-1]+merged[N/2])/2.0);
    printf("The median is: %lg",median);   
}

int main()
{
    int arr1[]={1,4,7,9,12,18,17};
    int arr2[]={5,10,17};
    int n1,n2,N;
    n1=sizeof(arr1)/sizeof(arr1[0]);
    n2=sizeof(arr2)/sizeof(arr2[0]);
    N=n1+n2;
    int merged[N];
    MedianofArray(arr1,arr2,merged,n1,n2,N);
    return 0;
}
