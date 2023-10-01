#include<stdio.h>
#include<string.h>
int top=-1;

void Push(char stack[],char x)
{
    top++;
    stack[top]=x;    
}

void Pop()
{
    top--;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    return 0;
}

void longestValidSubstr(char stack[],char exp[],int n)
{
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        if(exp[i]=='(')
            Push(stack,exp[i]);
        else if(!isEmpty() && exp[i]==')')
        {
            if(stack[top]=='(')
            {
                ctr++;
                Pop();
            }
        }
    }

    if(ctr==0)
        printf("\nNot a valid expression");
    else
        printf("\nLength of longest valid substring is: %d\n",ctr*2);
}

int main()
{
    char exp[100];
    printf("Enter a string of parantheses: ");
    scanf("%s",exp);
    int n=strlen(exp);   //size of string st
    char stack[n];

    longestValidSubstr(stack,exp,n);
}
