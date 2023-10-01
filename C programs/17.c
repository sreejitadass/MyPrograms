#include <stdio.h>
int GenStrong(int,int);
int main()
{
    int x,y;
    printf("enter upper and lower limit: \n");
    scanf("%d%d", &x, &y);
    printf("Strong numbers in the range: ");
    printf("%d\n", GenStrong(x,y));
    return 0;
}

int GenStrong(int a,int b)
{
   int r,sum=0,fact=1;
   for(int i=a;i<=b;i++)
   {
       while(i!=0)
       {
          r=i%10;
          for(int j=1;j<=r;j++)
          {
              fact*=j;
              sum+=fact;
          }
          i/=10;
       }
       int k;
       k=i;
       if(sum==k)
        return k;
       sum=0;
       fact=1;
   }
}
