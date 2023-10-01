#include<stdio.h>
#define N 5

int stack[N];
int top=-1;

void Push()
{
    int x;
    printf("Enter the element to be inserted: ");
    scanf("%d",&x);
    if(top==N-1)
        printf("\nOverflow");
    else
    {
        top++;
        stack[top]=x;
    }
}

void Pop()
{
    int item;
    if(top==-1)
        printf("\nUnderflow");
    else
    {
        item=stack[top];
        top--;
        printf("\nDeleted element: %d",item);
    }
}

void Peek()
{
    if(top==-1)
        printf("\nEmpty stack");
    else
    {
        printf("\nTopmost element: %d",stack[top]);
    }
}

void Display()
{
    printf("Stack: ");
    for(int i=top;i>=0;i--)
        printf("%d ",stack[i]);
    printf("\n");
}

int main()
{
    int ch=1;
    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\nEnter your choice: \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Peek();
                break;
            case 4:
                Display();
                break;
            default:
                printf("\nInvalid choice");
        }
        printf("\nEnter 0 to exit and 1 to continue: ");
        scanf("%d",&ch);
    }while(ch!=0);
    
    return 0;
}