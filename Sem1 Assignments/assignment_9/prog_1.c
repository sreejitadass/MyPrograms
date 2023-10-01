// find a given array’s maximum contiguous subarray sum
#include <stdio.h>  
int maxSubArraySum(int a[], int size)  
{  
int current_sum = 0, maximum_sum = 0;  
for (int i = 0; i < size; i++)  
    {  
        current_sum = current_sum + a[i];  
        if (current_sum > maximum_sum)  
           maximum_sum = current_sum;  
   
        if (current_sum< 0)  
           current_sum = 0;  
    }  
    return maximum_sum;  
}  

int main()  
{  
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};  
    int n = sizeof(a)/sizeof(a[0]);  
    int max_sum = maxSubArraySum(a, n);  
    printf("Maximum sum of the contiguous array is : %d \n", max_sum);  
    return 0;  
}    