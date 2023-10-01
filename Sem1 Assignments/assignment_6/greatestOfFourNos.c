// to find greatest of 4 numbers in c
#include<stdio.h> 

int main()
{
    int a=5, b=6, c=7, d=8;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest \n", a);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is greatest \n", b);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is greatest \n", c);
            }
            else
            {
                printf("%d is greatest \n", d);
            }
        }
    }

    return 0;
}