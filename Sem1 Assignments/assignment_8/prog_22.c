// find all subarrays with a given sum from a given array
#include<stdio.h>
void findSubarrays(int nums[], int len, int target){
    for (int i=0;i<len;i++){
        int currentSum=0;
        for (int j=i;j<len;j++){
            currentSum += nums[j];
            if (currentSum==target){
                printf("[%d…%d] —— { ", i, j);
                for (int k = i; k <= j; k++) {
                    printf("%d ", nums[k]);
                }
                printf("}\n");
            }
        }
    }
}
int main()
{
    int nums[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    int target = 7;
 
    int len = sizeof(nums)/sizeof(nums[0]);
    findSubarrays(nums, len, target);
 
    return 0;
}