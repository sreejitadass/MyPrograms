//flag a total number of odd elements in an array and print them uniquely
#include <stdio.h>  
int main()    
{    
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3, 7};
    int flag=0;  
    int c=0;
    int len = sizeof(arr)/sizeof(arr[0]);    
    printf("Odd elements in given array: \n");    
    for(int i = 0; i < len; i++) { 
        flag=0;   
        for(int j = i + 1; j < len; j++) {    
            if((arr[i] == arr[j])&&(arr[i]%2!=0)){
                flag=1;
                break;
            }
        } 
        if (flag==1) 
            continue;
        else if(arr[i]%2!=0){
            printf("%d\n",arr[i]);
            c++;
        }
    }
    printf("The total no of odd elements are %d\n",c);   
    return 0;    
}