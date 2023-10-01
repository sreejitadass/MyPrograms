#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    int flag=0;
    printf("enter 1st string: ");
    gets(s1);
    printf("enter 2nd string: ");
    gets(s2);
    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
       printf("unequal");
    else
       printf("equal");
    return 0;
}