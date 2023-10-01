#include<stdio.h>
int top=-1;

void Push(int stack[],int x)
{
    top++;
    stack[top]=x;    
}

void Pop()
{
    top--;
}


void nextGreater(int stack[],int n)
{
    for(int i=top+1;i<n;i++)
    {
        if(i!=n-1)
        {
            if(stack[i]>stack[top])
            {
                printf("%d -> %d",stack[top],stack[i]);
                Pop();
            }
        }
        else
        {
            printf("%d -> %d",stack[top],-1);
            Pop();
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int stack[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&stack[i]);
        Push(stack,stack[i]);
    }
    nextGreater(stack,n);
    return 0;
}