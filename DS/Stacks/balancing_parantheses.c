#include<stdio.h>
#include<stdbool.h>

#define N 50
char stack[N];
int top=-1;

void Push(int);
void Pop();
bool isEmpty();

void Push(int x)
{
    top++;
    stack[top]=x;
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

bool isValid(char exp[])
{
    bool ans=true;
    int n=6;
    for(int i=0;i<n;i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')   
        {
            Push(exp[i]);
        }
        else if(!isEmpty()&& exp[i]==')')
        {
            if(stack[top]=='(')
                Pop();
            else
            {
                ans=false;
                break;
            }
        }
        else if(!isEmpty()&& exp[i]=='}')
        {
            if(stack[top]=='{')
                Pop();
            else
            {
                ans=false;
                break;
            }
        }
        else if(!isEmpty()&& exp[i]==']')
        {
            if(stack[top]=='[')
                Pop();
            else
            {
                ans=false;
                break;
            }
        }
    }
    if(!isEmpty())
        return false;
    return ans;
}
int main()
{
    char exp[]="{([])}";
    if(isValid(exp))
        printf("\nValid expression");
    else
        printf("\nInvalid Expression");
    return 0;
}