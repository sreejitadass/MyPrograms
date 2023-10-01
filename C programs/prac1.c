#include <stdio.h>
void  Convert(int);
int r,bin=0,mu=1,x;

int main()
{
  printf("enter the number: ");
  scanf("%d", &x);
  Convert(x);
  return 0;
}


void Convert(int n)
{

    while(n!=0)
    {
        r=n%2;
        bin=bin+r*mu;
        mu=mu*10;
        n=n/2;
    }
    printf("Number in binary: ",bin);
}
