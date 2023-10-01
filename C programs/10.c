#include <stdio.h>
#include <math.h>
int main()
{
    int i=0,r,oct=0,dec;
    printf("Converting from decimal to octal");
    printf("Enter decimal value: ");
    scanf("%d", &dec);
    while(dec!=0)
    {
        r=dec%8;
        oct+=r*pow(10,i);
        dec/=8;
        i++;
    }
    printf("Octal number: %d",oct);
    return 0;
}
