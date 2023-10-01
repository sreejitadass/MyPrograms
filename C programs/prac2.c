#include <stdio.h>
void GenPerfect(int,int);

int main()
{
    int x,y;
    printf("enter the numbers: ");
    scanf("%d%d", &x, &y);
    GenPerfect(x,y);
    return 0;

}


void GenPerfect(int a, int b)
{
    int s=0;
    printf("Perfect Numbers between %d and %d are: \n", a,b);
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                s=s+j;
        }
        if(s==i)
            printf("%d\n", i);

        s=0;
    }
}
