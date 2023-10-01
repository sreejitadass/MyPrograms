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

void InfixtoPostfix(char infix[])
{
    int n=15,k=0;
    char postfix[n];
    //convert to postfix
    for(int i=0;i<n;i++)
    {
        if(infix[i]=='(')
            Push(infix[i]);
        else if(infix[i]==')')
        {
            while(!isEmpty() && stack[top]!='(')
            {
                postfix[k++]=stack[top];
                Pop();
            }
            if(!isEmpty())
                Pop();
        }
        else if(infix[i]>='a'&& infix[i]<='z' || infix[i]>='A'&& infix[i]<='Z')
            postfix[k++]=infix[i];
        else
        {
            while(!isEmpty() && (precedence(infix[i])<=precedence(stack[top])))
            {
                postfix[k++]=stack[top];
                Pop();
            }
            Push(infix[i]);
        }
    }
    while(!isEmpty())
    {
        postfix[k++]=stack[top];
        Pop();
    }
    //reverse to get prefix
    printf("Postfix expression: \n");
    for(int i=0;i<k;i++)
        printf("%c",postfix[i]);
}

int main()
{
    char infix[]="(a-b/c)*(a/k-l)";
    InfixtoPostfix(infix);

    return 0;
}