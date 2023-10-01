#include<stdio.h>
int main()
{
    int l=0,i=0,j;
    char temp;
    char s1[]="Computer";
    while(s1[i++]!='\0')
        l++;
    for(j=0;j<l/2;j++)
    {
        temp=s1[j];
        s1[j]=s1[l-1-j];
        s1[l-1-j]=temp;
    }
    printf("Reverse of string: %s",s1);
    return 0;
}