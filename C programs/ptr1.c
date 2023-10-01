#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    double avg;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    calc(a,b,c,d,e, &sum, &avg);
    printf("Sum=%d\n", sum);
    printf("Average=%lg\n",avg);
    return 0;
}

void calc(int v,int w,int y,int z,int *sum, double *avg)
{
    *sum=v+w+x+y+z;
    *avg=*sum/5.0;
}
