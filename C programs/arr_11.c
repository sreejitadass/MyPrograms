#include<stdio.h>
int main()
{
    int n,i,pos,x;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        printf("\nenter element: ");
        scanf("%d",&a[i]);
    }
    printf("\nenter the element to be inserted: ");
    scanf("%d",&x);
    printf("\nenter the position: ");
    scanf("%d",&pos);
    for(i=n-1;i>pos;i--)
        a[i+1]=a[i];
    a[pos-1]=x;
    printf("\nArray after inserting element: ");
    for(i=0;i<=n;i++)
        printf("%d\t ",a[i]);
    return 0;

}
