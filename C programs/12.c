#include <stdio.h>
void Perfect(int,int);
int main()
{
    int x,y;
    printf("Enter upper and lower limit: ");
    scanf("%d %d", &x,&y);
    Perfect(x,y);
    return 0;

}

void Perfect(int a,int b)
{
    int sum=0;
    printf("Perfect numbers between %d and %d: \n",a,b);
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<i;j++)
        {
          if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
        sum=0;
    }
}
