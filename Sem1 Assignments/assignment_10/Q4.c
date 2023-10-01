#include <stdio.h>
int main()
{
    char st[30];
    printf("Enter a string: ");
    gets(st);
    int i=0,count=0;
    while(st[i]!='\0')
    {
        if(st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||
        st[i]=='U'||st[i]=='a'||st[i]=='e'||st[i]=='i'||
        st[i]=='o'||st[i]=='u')
            count+=1;
        i++;
    }
    printf("Number of vowels: %d",count);
    return 0;
}