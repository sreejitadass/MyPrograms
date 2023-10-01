//reverse an arrays
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int len= sizeof(arr)/sizeof(arr[0]);
    int i = len-1;
    for (i; i>=0; i--)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
