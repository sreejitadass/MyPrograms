#include <stdio.h>
#include <math.h>
int main()
{
    int ch;
    double ar,l,b,B,H,r,a;
    printf("Enter your choice: \n");
    printf("1.Rectangle\n");
    printf("2.Square\n");
    printf("3.Circle\n");
    printf("4.Triangle\n");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        printf("Enter length and breadth: ");
        scanf("%lg%lg", &l, &b);
        ar=l*b;
        printf("Area: %lg",ar);
        break;
    case 2:
        printf("enter the side: ");
        scanf("%lg", &a);
        ar=a*a;
        printf("Area: %lg",ar);
        break;
    case 3:
        printf("enter the radius: ");
        scanf("%lg", &r);
        ar=M_PI*r*r;
        printf("Area: %lg",ar);
        break;
    case 4:
        printf("enter the base and height: ");
        scanf("%lg%lg", &B, &H);
        ar=(1.0/2.0)*B*H;
        printf("Area: %lg",ar);
        break;
    default:
        printf("Invalid choice");

    return 0;
}
}
