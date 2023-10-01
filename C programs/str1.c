#include<stdio.h>
#include<string.h>
int main()
{
    char st[10];
    printf("enter a string: ");
    gets(st);
    int count=0,i=0;
    while(st[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string: %d",count);
    return 0;
}
