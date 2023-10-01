#include<stdio.h>
#define IS_UPPER(x)  (x>='A'&&x<='Z')
#define IS_LOWER(x)  (x>='a'&&x<='z')
int main()
{
    char ch;
    printf("input any character: ");
    scanf("%c",&ch);
    if(IS_UPPER(ch))
        printf("Character is in upper case");
    else if(IS_LOWER(ch))
        printf("Character is in lower case");
    else
        printf("Entered input is not any character");
    return 0;
}   