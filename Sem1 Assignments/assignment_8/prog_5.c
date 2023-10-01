//count the total number of odd elements in an array and print them
#include <stdio.h>  
int main()    
{    
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3, 7};
    int count=0;  
    int len = sizeof(arr)/sizeof(arr[0]);    
    printf("Odd elements in given array: \n");    
    for(int i = 0; i < len; i++) {
        if (arr[i]%2!=0){            
            printf("%d\n", arr[i]);            
            count+=1;
        }     
    }
    for(int i = 0; i < len; i++) {    
        for(int j = i + 1; j < len; j++) {    
            if((arr[i] == arr[j])&&(arr[i]%2!=0)){
                count-=1;
            }
        } 
    }
    printf("The total no of odd elements are %d\n",count);   
    return 0;    
}