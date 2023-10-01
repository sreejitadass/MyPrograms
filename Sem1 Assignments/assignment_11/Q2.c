#include<stdio.h>
#define MAX(a,b)   (a>b)
int main()
{
    int a,b;
    printf("enter 2 numbers= ");
    scanf("%d%d",&a,&b);
    if(MAX(a,b))
        printf("First number is greater");
    else
        printf("Second number is greater");
    return 0;
}