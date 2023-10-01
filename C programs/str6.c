#include <stdio.h>
#include <string.h>

int main()
{
    char s[30]="Computer";
    int pos,l;
    char x,temp=' ';
    printf("enter the character to be inserted: ");
    scanf("%c",&x);
    printf("enter the index: ");
    scanf("%d",&pos);
    l=strlen(s);
    for(int i=l-1;i>=pos;i--)
    {
        s[i+1]=s[i];
    }
    s[pos]=x;
    printf("New string: %s",s);
    return 0;
}

