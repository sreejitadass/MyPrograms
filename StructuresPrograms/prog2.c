#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct Date{
        int day;
        int month;
        int year;
    }Date;
    Date a,b;

    //a = 3-12-2004
    a.day=3;
    a.month=12;
    a.year=2004;
    //b = 16-8-1995
    b.day=16;
    b.month=8;
    b.year=1995;

    bool flag=true;
    if(a.day!=b.day&&a.month!=b.month&&a.year!=b.year)
        flag=false;
    if(flag==true)
        printf("equal dates");
    else
        printf("unequal dates");
    return 0;
}