#include <stdio.h>
#include <math.h>
int isReverse(int n){
    int temp1=n;
    int d=0;
    int count1=0;
    while(temp1!=0){
        d=temp1%10;
        if (d==0||d==1||d==8)
            count1++;
        temp1=temp1/10;
    }
    return count1;
}
int isMirror(int n){
    int temp2=n;
    int d=0;
    int count2=0;
    while(temp2!=0){
        d=temp2%10;
        if (d==2||d==5)
            count2++;
        temp2=temp2/10;
    }
    return count2;
}
int isPrime(int n) {
    double sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
        if (n % i == 0)
        return 0;
    return 1;
}
int isAlpha(int a, int b) {
    for (int n = a; n <= b; n++)
        if (isPrime(n)==0){
                if (isReverse(n)&&isMirror(n))
                    printf("%d",n);
                // else
                //     printf("Not a Alpha No");
        }
    return 0;
}
int main() {
    int a,b;
    printf("Enter the lower range: ");
    scanf("%d",&a);
    printf("Enter the upper range: ");
    scanf("%d",&b);
    isAlpha(a, b);
    return 0;
}