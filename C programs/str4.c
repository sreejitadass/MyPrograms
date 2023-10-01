#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    printf("Enter the string: ");
    gets(s1);
    int l=strlen(s1);
    char ch;
    for(int i=0;i<l/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("Reversed string:  %s",s1);
    return 0;
}