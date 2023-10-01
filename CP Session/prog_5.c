#include <stdio.h>
int chkPair(int A[], int len, int x){
    for(int i = 0; i < (len - 1); i++) {
        for (int j=i + 1; j < len; j++) {
            if (A[i] + A[j] == x)
                return 1;
        }
    }
    return 0;
}
int main(void){
int A[]={0,-1,2,-3,1};
int x = -2;
int len = sizeof(A) / sizeof(A[0]);
if (chkPair(A, len, x))
    printf("Yes\n");
else
    printf("No\n");
return 0;
}