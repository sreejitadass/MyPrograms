#include<stdio.h>
int main()
{
    int ccnum[]={4,5,6,7,1,2,3,4,5,6,7,8,9,1,2,9};
    int n=sizeof(ccnum)/sizeof(ccnum[0]);
    int oddsum=0,evensum=0,totalsum=0;
    if(n!=16)
        printf("invalid data");
    int copy[n];
    for(int i=0;i<n;i++)
        copy[i]=ccnum[i];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ccnum[i]*=2;
            if(ccnum[i]>10){
                ccnum[i]-=9;
                oddsum+=ccnum[i];
            }
        }
        else
        {
           evensum+=copy[i]; 
        }
    }
    totalsum=oddsum+evensum;
    if(totalsum%10==0)
        printf("Valid credit card number");
    else
        printf("Invalid credit card number");
    return 0;
}