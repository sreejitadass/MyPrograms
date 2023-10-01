#include <stdio.h>
//void Strong(int,int);
void Strong(int a, int b)
{
    int r,fact=1,sum=0;
    printf("Strong numbers: \n");
    for(int i=a;i<=b;i++)
    {
        while(i!=0)
        {
          r=i%10;
          for(int j=1;j<=r;j++)
            fact=fact*j;
          sum=sum+fact;
          i=i/10;
          fact=1;
        }
        printf("%d\n", i);
    }
}


int main()
{
    int x,y;
    printf("enter number 1: \n");
    scanf("%d", &x);
    printf("enter number 2: \n");
    scanf("%d", &y);
    Strong(x,y);

}
