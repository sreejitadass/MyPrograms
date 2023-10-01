#include <stdio.h>
#define MAX 100000
void printPairs(int arr[], int arr_size, int target)
{
    int i, temp;
    int s[MAX] = { 0 };
    for (i = 0; i < arr_size; i++) {
        temp = target - arr[i];
        if (s[temp] == 1) {
            printf("Yes");
            return;
        }
        s[arr[i]] = 1;
    }
    printf("No");
}
int main()
{
 int A[] = { 1, 4, 45, 6, 10, 8 };
 int target = 16;
 int arr_size = sizeof(A) / sizeof(A[0]);
 printPairs(A, arr_size, target);
 return 0;
}