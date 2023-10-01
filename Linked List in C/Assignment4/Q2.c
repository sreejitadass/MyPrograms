#include<stdio.h>
#include<stdbool.h>

#define N 50
char stack[N];
int top=-1;

void Push(int item)
{
    top++;
    stack[top]=item;
}

void Pop()
{
    top--;
}

bool isEmpty()
{
    if(top==-1)
        return true;
    else    
        return false;
}

int precedence(char x)
{
    if(x=='^')
        return 3;
    else if(x=='*'||x=='/')
        return 2;
    else if(x=='+'||x=='-')
        return 1;
    else
        return -1;
}

void InfixtoPrefix(char infix[])
{
    int n=15,k=0;
    char infix_rev[n];
    char prefix[n];
    //reverse the infix expression
    for(int i=n-1;i>=0;i--)
    {
        infix_rev[k++]=infix[i];
    }
    printf("Reverse infix expression: \n");
    for(int i=0;i<n;i++)
        printf("%c",infix_rev[i]);
    //convert to postfix
    k=0;
    for(int i=0;i<n;i++)
    {
        if(infix_rev[i]==')')
            Push(infix_rev[i]);
        else if(infix_rev[i]=='(')
        {
            while(!isEmpty() && stack[top]!=')')
            {
                prefix[k++]=stack[top];
                Pop();
            }
            if(!isEmpty())
                Pop();
        }
        else if(infix_rev[i]>='a'&& infix_rev[i]<='z' || infix_rev[i]>='A'&& infix_rev[i]<='Z')
            prefix[k++]=infix_rev[i];
        else
        {
            while(!isEmpty() && (precedence(infix_rev[i])<=precedence(stack[top])))
            {
                prefix[k++]=stack[top];
                Pop();
            }
            Push(infix_rev[i]);
        }
    }
    while(!isEmpty())
    {
        prefix[k++]=stack[top];
        Pop();
    }
    //reverse to get prefix
    printf("\n\nPrefix expression: \n");
    for(int i=k-1;i>=0;i--)
        printf("%c",prefix[i]);
}

int main()
{
    char infix[]="k+l-m*n+(o^p)*w/u/v*t+q";
    InfixtoPrefix(infix);

    return 0;
}