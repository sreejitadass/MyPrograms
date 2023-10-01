#include<stdio.h>
int main()
{
  int n,i,j,temp;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nenter element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }
    int secondLargest=a[0];
    for(i=0;i<n-1;i++)
    {
       if(a[i]>secondLargest)
            secondLargest=a[i];
    }
    printf("Second largest element is: %d",secondLargest);
    return 0;
}
