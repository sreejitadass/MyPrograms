//Write a function in C to print all duplicate elements in an array.
#include<stdio.h>
void printDuplicate(int arr[], int len){
    for (int i=0; i<len; i++)
    {
        int j;
        for (j=i+1; j<len; j++){
           if (arr[i] == arr[j])
            //    printf("%d",arr[i]);
            break;
        }
        if (i == j)
            printf("%d",arr[i]);
    }
}
int main(){
    //int arr[] ={1, 2, 3, 4, 2, 7, 8, 8, 3, 7};
    int arr[] ={2, 2, 3, 4, 2, 7, 8, 8, 3, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    printDuplicate(arr, len);
    printf("\n");
    return 0;
}