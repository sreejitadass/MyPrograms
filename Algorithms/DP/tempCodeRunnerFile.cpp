void push(char st[], char x)
{
    top++;
    st[top] = x;
}

void pop()
{
    top--;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}