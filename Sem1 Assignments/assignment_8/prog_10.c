//Separate odd and even integers stored in an array into two separate arrays
#include <stdio.h>  
int main()    
{    
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3, 7};
    int len = sizeof(arr)/sizeof(arr[0]); 
//determining the sizeof odd+ and even array
    int odd_count,even_count=0; 
    for (int i=0;i<len;i++){
        if (arr[i]%2==0)
            odd_count+=1;
        else
            even_count+=1;
    }
    int odd[odd_count];  
    int even[even_count];
    int odd_incrementer,even_incrementer=0;
//Separating odd and even arrays from one single array 
    for(int i = 0; i < len; i++) {
        if (arr[i]%2!=0){            
            odd[odd_incrementer]=arr[i];
            odd_incrementer++;
        }
        else if(arr[i]%2==0){
            even[even_incrementer]=arr[i];
            even_incrementer++;
        }
    }
//printing the seperate odd and even arrays
    int len_odd=sizeof(odd)/sizeof(odd[0]);
    int len_even=sizeof(even)/sizeof(even[0]);
    printf("odd elements  ");
    for(int i = 0; i < len_odd; i++) { 
        printf("%d",odd[i]);   
    }
    printf("\neven elements ");
    for(int i = 0; i < len_even; i++) { 
        printf("%d",even[i]);
    }
    printf("\n");
    return 0;
}