//Write a function in C to print all duplicate elements in an array.
#include<stdio.h>
#include<stdlib.h>
int printDuplicate(int arr[],int len){
    int c=0;
    int *visited = (int*)calloc(len,sizeof(int));
    for (int i=0;i<len;i++){
        if (visited[i])
            continue;
        for (int j=i+1;j<len;j++){
            if (arr[i]==arr[j])
                visited[i]=visited[j]=1;
        }
        if (visited[i]){
            c++;
            printf("%d",arr[i]);
        }
        }
        free(visited);
        printf("\nThe no of duplicate elements are : %d",c);
}

int main(){
    int arr[] ={2, 2, 3, 4,3, 2,1, 7, 8, 8, 3, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    printDuplicate(arr, len);
    printf("\n");
    return 0;
}