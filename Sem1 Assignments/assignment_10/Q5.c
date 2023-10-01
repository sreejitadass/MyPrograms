#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    char rev[50];
    int flag=0,i,j=0;
    printf("Enter a string: ");
    gets(st);
    int l=strlen(st);
    for(i=l-1;i>=0;i--)
    {
        rev[j++]=st[i];
    }
    for(int i=0;i<l;i++)
    {
        if(st[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not a palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}