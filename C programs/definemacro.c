#include<stdio.h>
#define MUL(a,b) a*b
int main()
{
    printf("Multiplication is: %d",MUL(5-2,7+4));

    #undef MUL;
    printf("Multiplication is: %d",MUL(5-8,7+9));
    return 0;
}
