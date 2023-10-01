#include <stdio.h>
#include <stdlib.h>

void ReverseArray(int a[],int n)
{
    printf("Reverse array: ");
    for (int i=n-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int *a,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter element at index %d",i);
        scanf("%d",&a[i]);
    }
    ReverseArray(a,n);
    return 0;
}