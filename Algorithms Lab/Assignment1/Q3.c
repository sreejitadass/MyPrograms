#include<stdio.h>
#include<math.h>

void Multiply(int n,int n1,int n2)
{
    int r=0,res=0,i=0;
    while(n2!=0)
    {
        r=n2%10;
        res=res+((r*n1)*(pow(10,i)));
        n2=n2/10;
        i++;
    }
    printf("The number after multiplication: %d",res);
}

int main()
{
    int n,n1,n2;
    printf("Enter the number of digits: ");
    scanf("%d",&n);
    printf("Enter the number-1: ");
    scanf("%d",&n1);
    printf("Enter the number-2: ");
    scanf("%d",&n2); 

    Multiply(n,n1,n2);
    return 0;
}
