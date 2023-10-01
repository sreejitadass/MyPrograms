#include<stdio.h>
int main()
{
    int a[]={19,-8,-67,9,54,-92,7};
    int n=sizeof(a)/sizeof(a[0]);
    int max=a[0],smax=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max && a[i]>smax)
            smax=a[i];
    }
    printf("second largest element: %d",smax);
    return 0;
}