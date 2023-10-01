#include <stdio.h>
int main()
{
    double s=0.0;
    int x,n;
    printf("Input the value of x: ");
    scanf("%d",&x);
    printf("Input the number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a=2*i+1;
        if(i%2==0)
            s=s-pow(x,a);
        else
            s=s+pow(x,a);
    }
    printf("Sum of series: %lg",s);
    return 0;
}
