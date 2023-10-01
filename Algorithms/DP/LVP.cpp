#include <iostream>
#include <string>
using namespace std;

int top = -1;

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

int LVP(string s, char st[])
{
    int ctr = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            push(st, s[i]);
        }
        else if (!isEmpty() && s[i] == ')')
        {
            if (st[top] == '(')
            {
                ctr++;
                pop();
            }
        }
    }
    return (2 * ctr);
}

int main()
{
    string s;
    cout << "Enter string of parantheses: ";
    cin >> s;

    int n = s.length();
    char st[n];
    cout << "Length of longest valid parantheses is: " << LVP(s, st) << endl;
    return 0;
}