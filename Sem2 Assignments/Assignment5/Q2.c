#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define N 100
char stack[N];
int top=-1;

void Push(char x)
{
    top++;
    stack[top]=x;
}

int Pop()
{
    return stack[top--];
}

bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void ReverseString(char st[])
{
    int n=strlen(st);
    printf("\nReversed string: ");
    for(int i=0;i<n;i++)
    {
        if(st[i]!=' ')
        {
            Push(st[i]);
        }
        else
        {
            while(!isEmpty())
            {
                char a=Pop();
                printf("%c",a);
            }
            printf(" ");
        }
    }
    while(!isEmpty())
    {
        char a=Pop();
        printf("%c",a);
    }
    printf("\n");
}

int main()
{
    char st[100];
    printf("Enter a string: ");
    gets(st);
    ReverseString(st);

    return 0;
}