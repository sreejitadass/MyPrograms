#include <stdio.h>
int main()
{
    int u;
    double amt,charge,tot_amt;
    printf("Enter the number of units: ");
    scanf("%d", &u);
    if(u<=199)
        charge=1.20;
    else if(u>=200 && u<400)
        charge=1.50;
    else if(u>=400 && u<600)
        charge=1.80;
    else
        charge=2.00;
    amt=u*charge;
    if(amt<100)
        tot_amt=100.0;
    if(amt>400)
        tot_amt=amt+0.15*amt;
    else
        tot_amt=amt;
    printf("\nNumber of units: %d",u);
    printf("\nTotal amount: %lg",tot_amt);
    return 0;
}
