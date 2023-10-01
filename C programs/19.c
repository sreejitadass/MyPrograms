#include <stdio.h>
#include <math.h>
int LeadingDigit(int);
int main()
{
   int m;
   printf("Enter number: ");
   scanf("%d", &m);
   printf("Leading digit of %d is %d: ", m, LeadingDigit(m));
   return 0;
}

int LeadingDigit(int n)
{
   int d,noOfdig=0,copy=n;
   while(n!=0)
   {
       n/=10;
       noOfdig++;
   }
   d=(int)copy/pow(10,(noOfdig-1)) ;
   return d;
}
