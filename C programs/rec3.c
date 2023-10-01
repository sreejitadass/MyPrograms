#include <stdio.h>
int main()
{
    int n=0;
    printf("Fibonacci series: \n");
    for(int i=1;i<=25;i++)
    {
        printf("%d\t", fibo(n));
        n++;
    }

}


int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
