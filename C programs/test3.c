#include<stdio.h>
void findArray(int b[],int n)
{
    int a[n],temp;
    for(int i=0;i<n;i++)   //copy b to a
        a[i]=b[i];
    for(int i=0;i<n-1;i++) 
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The original array is: ");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);

    //find the value of m
    int m=0;
    for(int i=0;i<n;i++) 
    {
        if(b[i]>a[i])
            m++;
    }
    printf("\nThe value of m is: %d",m);
}
int main()
{
    int b[]={12,15,16,1,3,5,6,8,9,10};   //rotated array
    int n=sizeof(b)/sizeof(b[0]);
    findArray(b,n);
    return 0;
}