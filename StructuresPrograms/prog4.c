#include<stdio.h>
typedef struct Complex{
    float real;
    float imag;
}Complex;

void addComplexNumbers(Complex n1,Complex n2)
{
    Complex add;
    add.real=n1.real+n2.real;
    add.imag=n1.imag+n2.imag;
    printf("Sum = %.1f+%.1fi",add.real,add.imag);
}

int main()
{
    Complex n1,n2;
    printf("\nFor complex number 1\n");
    printf("enter the real part: ");
    scanf("%f",&n1.real);
    printf("enter the imaginary part: ");
    scanf("%f",&n1.imag);
    printf("\nFor complex number 2\n");
    printf("enter the real part: ");
    scanf("%f",&n2.real);
    printf("enter the imaginary part: ");
    scanf("%f",&n2.imag);
    addComplexNumbers(n1,n2);
    return 0;
}