#include<stdio.h>
#define N 5
int S1[N];
int S2[N];
int top1=-1;
int top2=-1;
int count=0;

void Push1(int data)
{
    if(top1==N-1)
        printf("\nOverflow");
    else
    {
        top1++;
        S1[top1]=data;
    }
}

void Push2(int data)
{
    if(top2==N-1)
        printf("\nOverflow");
    else
    {
        top2++;
        S2[top2]=data;
    }
}

int Pop1()
{
    if(top1==-1)
    {
        printf("\nUnderflow");
        return 0;
    }
    else
    {
        return S1[top1--];
    }
}

int Pop2()
{
    if(top2==-1)
    {
        printf("\nUnderflow");
        return 0;
    }
    else
    {
        return S2[top2--];
    }
}

void Enqueue(int x)
{
    Push1(x);
    count++;
}

void Dequeue()
{
    int a=0;
    for(int i=0;i<count;i++)
    {
        a=Pop1();       //pop from stack-1
        Push2(a);       //push into stack-2
    }
    printf("\nDequeued element is: %d",Pop2());             //pop from stack-2
    count--;
    for(int i=0;i<count;i++)
    {
        a=Pop2();
        Push1(a);       //push back to stack-1
    }
}

void Peek()
{
    int a;
    if(top1==-1)
        printf("\nQueue is empty");
    else
    {
        int b;
        for(int i=0;i<count;i++)
        {
            a=Pop1();
            Push2(a);   
        }
        b=Pop2();
        printf("\nElement at front is: %d",b);
        Push1(b);
        for(int i=0;i<count;i++)
        {
            a=Pop2();
            Push1(a);       //push back to stack-1
        }
    }
}

void Display()
{
    printf("\nQueue: ");
    for(int i=0;i<top1;i++)
        printf("%d ",S1[top1]);
}

int main()
{
    Enqueue(2);
    Enqueue(9);
    Enqueue(7);
    Enqueue(1);
    Peek();
    Dequeue();
    Dequeue();
    Display();

    return 0;
}