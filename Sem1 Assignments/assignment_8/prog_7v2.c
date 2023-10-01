//flag a total number of duplicate elements in an array
#include <stdio.h>    
int main()    
{    
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int flag=0;     
    int len = sizeof(arr)/sizeof(arr[0]);    
    printf("Duplicate elements in given array: \n");    
    //Searches for duplicate element    
    for(int i = 0; i < len; i++) {    
        for(int j = i + 1; j < len; j++) {    
            if(arr[i] == arr[j]){
                printf("%d\n", arr[j]);
                flag+=1;
            }
        }    
    } 
    printf("The total no of duplicate elements are %d",flag);   
    return 0;    
}