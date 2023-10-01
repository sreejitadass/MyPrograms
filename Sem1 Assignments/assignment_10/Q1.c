#include <stdio.h>
int main()
{
    char st[30];
    printf("enter any string: ");
    gets(st);
    for(int i=0;st[i]!='\0';i++)
    {
        printf("Address of character %d: %p\n",(i+1),&st[i]);
    }
    return 0;
}