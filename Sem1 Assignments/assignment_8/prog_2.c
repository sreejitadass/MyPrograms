//Write a function in C to find the sum of all array elements.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int len= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (int i=0; i<len; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}

