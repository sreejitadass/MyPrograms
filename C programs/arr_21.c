#include <stdio.h>
int main()
{
    int i,j,sum,n,temp=0;
    int a[]={3,67,81,4,-5,59,-77};
    n= sizeof(a)/sizeof(a[0]);
    printf("enter the sum: ");
    scanf("%d",&sum);
    printf("the pair of elements are: ");
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n-1;j++)
       {
          temp=a[i]+a[j];
          if(temp==sum)
          {
            printf("%d  %d\n",a[i],a[j]);
          }
       }
    }
    return 0;
}