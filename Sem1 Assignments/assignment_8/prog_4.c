//copy the elements of one array into another array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int arr_Copy[len];
    for (int i=0;i<len;i++){
        arr_Copy[i]=arr[i];
    }
    printf("The original array is: ");
    for (int i=0;i<len;i++){
        printf("%d",arr[i]);
    }   
    printf("\nThe copied array is: ");
    for (int i=0;i<len;i++){
        printf("%d",arr_Copy[i]);
    }
    printf("\n");
    return 0;
}
