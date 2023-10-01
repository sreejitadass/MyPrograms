#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    printf("Enter the string: ");
    gets(s1);
    int l=strlen(s1);
    //strlwr(s1);
    for(int i=0;i<l;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("Lower case string: %s",s1);
    return 0;
}