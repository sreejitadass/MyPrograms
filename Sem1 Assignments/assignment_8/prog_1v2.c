#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i, n;
    int *arr;
    printf("Number of elements to be entered:");
    scanf("%d",&n);
    arr = (int*)calloc(n, sizeof(int));
    printf("Enter %d numbers:\n",n);
    for( i=0 ; i < n ; i++ ) {
       scanf("%d",&arr[i]);
    }
    //int len= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    free(arr);
    arr=NULL;
    return 0;
}

