// Merge two arrays of the same size sorted in descending order
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr1[]={1,3,5,9,8};
    int arr2[]={2,4,6,7,0};
    int *arr3;
    int i, j, k;
    int len_arr1=sizeof(arr1)/sizeof(arr1[0]);
    int len_arr2=sizeof(arr2)/sizeof(arr2[0]);
    int len_arr3=len_arr1+len_arr2;
    arr3 = calloc(len_arr3, sizeof(int));
    if(len_arr1==len_arr2){
        for(i=0;i<len_arr1; i++){
                arr3[i] = arr1[i];
            }
        for(j=0;j<len_arr2; j++){
                arr3[i] = arr2[j];
                i++;
            }
        for(i=0;i<len_arr3; i++)
            {
            for(k=0;k<len_arr3-1;k++)
                {
                    if(arr3[k]<=arr3[k+1]){
                        j=arr3[k+1];
                        arr3[k+1]=arr3[k];
                        arr3[k]=j;
                    }  
                }
            }                             
        printf("\nThe merged array in decending order is :\n");
        for(i=0; i<len_arr3; i++)
        {
            printf("%d  ", arr3[i]);
        }
    }
        printf("\n\n");
    return 0;
}
