#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("enter a sentence: ");
    gets(s);
    int l=strlen(s),lw;
    for(int i=l-1;i>=0;i--)
    {
        char word[30]={'\0'};
        int k=0;
        while(s[i]!=' ')
            word[k++]=s[i];
        lw=strlen(word);
        for(int j=lw-1;j>=0;j--)
        {
            printf("%c",word[j]);
        }
        printf("\t");
    }
    return 0;
}