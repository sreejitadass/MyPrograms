#include <stdio.h>
void Ugly(int);
int main()
{
    int num1;
    printf("enter a number: ");
    scanf("%d", num1);
    Ugly(num1);
}

void Ugly(int num)
{
    int c=0,flag=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            if(i==2 || i==3 || i==5)
                flag=1;
        }
    }
    if(flag)
        printf("Ugly Number");
    else
        printf("Not an ugly number");

}



