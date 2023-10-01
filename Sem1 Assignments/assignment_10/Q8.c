#include <stdio.h>
#include <string.h>
void ReverseSentence(char s[],int len)
{
    char sentence[50],word[25];
    int j,k;
    for(int i=0;i<len;i++)
    {
        j=0; 
        while(s[i]!='.')
        {
            sentence[j++]=s[i];
        }
        k=0;
        while(sentence[i]!=' ')
        {
            word[k++]=sentence[i];
        }
        int lw=strlen(word);
        for(int i=lw-1;i>=0;i--)
        {
            printf("%c",word[i]);
        }
        printf("\t");
    }
}


int main()
{
    char s[]="This is an example. Another sentence goes here";
    int len=strlen(s);
    ReverseSentence(s,len);
    return 0;
}