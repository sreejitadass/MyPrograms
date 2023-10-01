#include <stdio.h>
int Count(int);
int ctr=0;
int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d", &m);
    printf("\nNumber of digits: %d",Count(m));

}


int Count(int n)
{
    //static int ctr=0;
    if(n!=0)
    {
        ctr++;
        Count(n/10);
    }
    return ctr;
}
