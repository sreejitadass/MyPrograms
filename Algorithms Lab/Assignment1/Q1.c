#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100

int s1[N];
char s2[N];
int top1=-1;
int top2=-1;

void Push1(int y)
{ 
    if(top1==N-1)
    {
        printf("Overflow");
    }
    else{
    top1++;
    s1[top1]=y;
    }
}

void Push2(char z)
{ 
    if(top2==N-1)
    {
        printf("Overflow");
    }
    else
    {
    top2++;
    s2[top2]=z;
    }
}

void Pop1()
{
    if(top1==-1)
    {
        printf("Underflow");
    }
    top1--;
}

void Pop2()
{
    if(top2==-1)
    {
        printf("Underflow");
    }
    top2--;
}


int precedenceCheck(char x)
{
    if(x=='^')
        return 3;
    else if(x=='*'||x=='/')
        return 2;
    else if(x=='+'||x=='-')
        return 1;
    else
        return 0;
}

int operation(int a,int b,char op)
{
    switch(op)
    {
        case '+':
        return a+b;
        break;

        case '-':
        return a-b;
        break;

        case '*':
        return a*b;
        break;

        case '/':
        return a/b;
        break;

        case '^':
        return a^b;
        break;

        default:
        return 0;
    }
}

void evaluate()
{    
        int temp=operation(s1[top1],s1[top1-1],s2[top2]);

        Pop1();
        Pop1();

        Push1(temp);
        
        Pop2();

        temp=operation(s1[top1],s1[top1-1],s2[top2]);
        printf("The final answer of the infix expression is: %d\n",temp);
    
}

int main()
{
    char infix[N];
    printf("Enter the infix expression: ");
    scanf("%s",infix);
    printf("The infix expression is:  %s\n",infix);

    //pushing operators
    for(int i=0;i<strlen(infix);i++)
    {
        if(infix[i]=='+' || infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/'|| infix[i]=='^')
        {
            if(top2==-1)
            {
                Push2(infix[i]);
            }
            if(precedenceCheck(s2[top2])<precedenceCheck(infix[i]))
            {
                Push2(infix[i]);
            }
            if(precedenceCheck(s2[top2])>precedenceCheck(infix[i]))
            {
                while(precedenceCheck(s2[top2])>precedenceCheck(infix[i]))
                {
                    Pop2();
                }
                Push2(infix[i]);
            }
            
        }
        //pushing numbers
        else
        {
            Push1(infix[i]-48);
        }
    } 
    evaluate();  
}