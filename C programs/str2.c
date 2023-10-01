#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[10];
    printf("enter string 1: ");
    gets(s1);
    printf("enter string 2: ");
    gets(s2);
    int len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(int i=0;i<=len2;i++)
        s1[len1+i]=s2[i];
    printf("%s",s1);
    return 0;
}
