#include <stdio.h>
int main()
{
    int fact,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact=fact_r(n);
    printf("Factorial value= %d" ,fact);
    return 0;
}

int fact_r(int x)
{
    int f;
    if(x==1)
        return 1;
    else
        return(x*fact_r(x-1));
}
